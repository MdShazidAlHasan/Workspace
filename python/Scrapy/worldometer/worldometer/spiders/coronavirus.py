import scrapy


class CoronavirusSpider(scrapy.Spider):
    name = 'coronavirus'
    allowed_domains = ['www.worldometers.info']
    start_urls = ['https://www.worldometers.info/coronavirus/']

    def parse(self, response):
        for country in response.xpath('//td/a'):
            print(country)

        return