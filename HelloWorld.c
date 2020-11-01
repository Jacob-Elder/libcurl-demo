#include <stdio.h>
#include <./curl/curl.h>

int main()
{
	printf("Hello World!\n");
	CURL *curl;
	CURLcode res;
	curl_global_init(CURL_GLOBAL_ALL);
	curl = curl_easy_init();


	if (curl)
	{
		curl_easy_setopt(curl, CURLOPT_URL, "http://example.com/");

		res = curl_easy_perform(curl);
	}

	curl_global_cleanup();
	return 0;;
}