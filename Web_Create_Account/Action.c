Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_user("{UserName}", 
		lr_unmask("5dc039261a6c326552977f317f"), 
		"{URL}");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");
/*
	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=77", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
*/
	web_add_cookie("1P_JAR=2019-10-31-14; DOMAIN=accounts.google.com");

	web_add_cookie("NID=190=j3D-BtK5BXZGgCQVq1oATfFkVJ8PG3ztSxjsI5HkdjufPoakHLBrm4wNWf6DjpR0UUfobNvRRd0laOV2oEa-RCulzjUVcxr7YOHG-mUkGP3DLEJUf7mmWh8PEkqTgx19zp8IBcc7E2SR-BdAMnw7YmzLsi2xFham5rG8pcY8qnQ; DOMAIN=accounts.google.com");

	web_add_header("Origin", 
		"https://www.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"aohghmighlieiainnegkcijnfilokake,apdfllckaahabafndbhieahigkjlhalf,blpcfgokakmgnkcojhhkbfbldkacnbeo,ghbmnnjooekpmoecnnnilnnbdlolhkhi,nmmhkkegccagdldgiimedpiccmgmieda,pjkljhegncpnkpknbcohdijeoejaedia,pkedcjkdefgpdelpbcmbmeomcjbeemfm");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-77.0.3865.120");

	web_url("crx", 
		"URL=https://clients2.google.com/service/update2/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=chromecrx&prodchannel=&prodversion=77.0.3865.120&lang=en-US&acceptformat=crx2,crx3&x=id%3Daohghmighlieiainnegkcijnfilokake%26v%3D0.10%26installedby%3Dinternal%26uc&x=id%3Dapdfllckaahabafndbhieahigkjlhalf%26v%3D14.1%26installedby%3Dinternal%26uc&x=id%3Dblpcfgokakmgnkcojhhkbfbldkacnbeo%26v%3D4.2.8%26installedby%3Dinternal%26uc&x="
		"id%3Dghbmnnjooekpmoecnnnilnnbdlolhkhi%26v%3D1.7%26installedby%3Dexternal%26uc&x=id%3Dnmmhkkegccagdldgiimedpiccmgmieda%26v%3D1.0.0.5%26installedby%3Dother%26uc&x=id%3Dpjkljhegncpnkpknbcohdijeoejaedia%26v%3D8.2%26installedby%3Dinternal%26uc&x=id%3Dpkedcjkdefgpdelpbcmbmeomcjbeemfm%26v%3D7719.805.0.2%26installedby%3Dother%26uc", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", "Referer=", ENDITEM, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", "Referer=", ENDITEM, 
		LAST);

	lr_start_transaction("URL");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=adm-aos");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(12);

	web_url("{URL}", 
		"URL=http://{URL}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/main.min.js", ENDITEM, 
		"Url=/services.properties", ENDITEM, 
		"Url=/css/images/logo.png", ENDITEM, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=http://{URL}/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=http://{URL}/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=http://{URL}/css/main.min.css", ENDITEM, 
		"Url=/css/images/closeDark.png", ENDITEM, 
		"Url=https://www.google-analytics.com/analytics.js", ENDITEM, 
		"Url=https://www.google-analytics.com/r/collect?v=1&_v=j79&a=224895254&t=pageview&_s=1&dl=http%3A%2F%2Fadm-aos%2F&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1200&vp=1920x1057&je=0&_u=IEBAAEAB~&jid=440406191&gjid=409830174&cid=1107875827.1572878185&tid=UA-81334227-1&_gid=1143202192.1572878185&_r=1&z=96533008", ENDITEM, 
		"Url=/css/images/arrow_right.png", "Referer=http://{URL}/css/main.min.css", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1235", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1236", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1237", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1238", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1234", ENDITEM, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=http://{URL}/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=http://{URL}/css/main.min.css", ENDITEM, 
		"Url=/css/images/Special-offer.jpg", ENDITEM, 
		"Url=/css/images/GoUp.png", ENDITEM, 
		"Url=/css/images/facebook.png", ENDITEM, 
		"Url=/css/images/twitter.png", ENDITEM, 
		"Url=/css/images/linkedin.png", ENDITEM, 
		"Url=/css/images/Banner3.jpg", ENDITEM, 
		"Url=/css/images/Banner2.jpg", ENDITEM, 
		"Url=/css/images/Banner1.jpg", ENDITEM, 
		"Url=/css/images/Popular-item3.jpg", ENDITEM, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j79&a=224895254&t=pageview&_s=2&dl=http%3A%2F%2Fadm-aos%2F&dp=%2F&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1200&vp=1920x1057&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1107875827.1572878185&tid=UA-81334227-1&_gid=1143202192.1572878185&z=1494341681", ENDITEM, 
		"Url=/css/images/Popular-item2.jpg", ENDITEM, 
		"Url=/css/images/Popular-item1.jpg", ENDITEM, 
		"Url=/css/images/FacebookLogo.png", "Referer=http://{URL}/css/main.min.css", ENDITEM, 
		"Url=/css/images/Bell.png", "Referer=http://{URL}/css/main.min.css", ENDITEM, 
		"Url=/css/images/Check.png", "Referer=http://{URL}/css/main.min.css", ENDITEM, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j79&a=224895254&t=pageview&_s=3&dl=http%3A%2F%2Fadm-aos%2F&dp=%2Fregister&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1200&vp=1920x1057&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1107875827.1572878185&tid=UA-81334227-1&_gid=1143202192.1572878185&z=823847503", ENDITEM, 
		"Url=https://www.google-analytics.com/r/collect?v=1&_v=j79&a=224895254&t=event&_s=4&dl=http%3A%2F%2Fadm-aos%2F&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1200&vp=1920x1057&je=0&ec=Account&ea=register&_u=KEBAAEAB~&jid=1670649795&gjid=163797476&cid=1107875827.1572878185&tid=UA-81334227-1&_gid=1143202192.1572878185&_r=1&z=178451728", ENDITEM, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j79&a=224895254&t=pageview&_s=5&dl=http%3A%2F%2Fadm-aos%2F&dp=%2F&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1200&vp=1920x1057&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1107875827.1572878185&tid=UA-81334227-1&_gid=1143202192.1572878185&z=747693430", ENDITEM, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j79&a=224895254&t=event&_s=6&dl=http%3A%2F%2Fadm-aos%2F&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1200&vp=1920x1057&je=0&ec=Account&ea=signIn&_u=KEBAAEAB~&jid=&gjid=&cid=1107875827.1572878185&tid=UA-81334227-1&_gid=1143202192.1572878185&z=1672056939", ENDITEM, 
		LAST);

	web_url("ALL", 
		"URL=http://{URL}/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"http://{URL}");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountConfigurationRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=http://{URL}/accountservice/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://{URL}/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		EXTRARES, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZN0GsyAN9T9UjLeeNQA4kIy3OQUx6JCMteG8SGSQjLQ8WviskFA==", "Referer=", ENDITEM, 
		LAST);

	web_url("categories", 
		"URL=http://{URL}/catalog/api/v1/categories", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga=GA1.1.1107875827.1572878185; DOMAIN=adm-aos");

	web_add_cookie("_gid=GA1.1.1143202192.1572878185; DOMAIN=adm-aos");

	web_add_cookie("_gat=1; DOMAIN=adm-aos");

	web_url("search", 
		"URL=http://{URL}/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_url("popularProducts.json", 
		"URL=http://{URL}/app/tempFiles/popularProducts.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html", 
		"URL=http://{URL}/app/views/home-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{URL}/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZXaM-FVW3SOkjLeeNQA4kIy3OQUx6JCMteG8SGSQjLQ8WviskIy2E5pjgJCMt9nKYWSQjLcd2OFAkIy1axjztJCMtcpdcLyQU", "Referer=", ENDITEM, 
		LAST);

	web_url("all_data", 
		"URL=http://{URL}/catalog/api/v1/categories/all_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("URL",LR_AUTO);

	lr_start_transaction("CreateAcount");

	web_url("register-page.html", 
		"URL=http://{URL}/app/user/views/register-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{URL}/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"http://{URL}");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetCountriesRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetCountriesRequest", 
		"URL=http://{URL}/accountservice/GetCountriesRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://{URL}/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetCountriesRequest xmlns=\"com.advantage.online.store.accountservice\"></GetCountriesRequest></soap:Body></soap:Envelope>", 
		EXTRARES, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZXgoRQLRRMawjLeeNQA4kIy3OQUx6JCMteG8SGSQjLQ8WviskIy1sO4F2JCMtYUdTHCQjLZhkx8EkIy2TQulDJCMtNYZUHCQjLYOlkDckIy28aaIeJCMte8Ku1iQjLY3GQhMkIy3wAbqhJCMtqopuuyQjLfhv2M8kIy0UIRi_JBQ=", "Referer=", ENDITEM, 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("experimentstatus", 
		"URL=https://clients4.google.com/chrome-sync/experimentstatus", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x0Bgcm_channel", 
		LAST);

	web_add_auto_header("Origin", 
		"http://{URL}");

	web_add_auto_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountCreateRequest");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(53);

	web_custom_request("AccountCreateRequest", 
		"URL=http://{URL}/accountservice/AccountCreateRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://{URL}/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountCreateRequest xmlns=\"com.advantage.online.store.accountservice\"><accountType>20</accountType><address>{Address}</address><allowOffersPromotion>true</allowOffersPromotion><cityName>{City}</cityName><countryId>126</countryId><email>{Email}</email>"
		"<firstName>david</firstName><lastName>{LastName}</lastName><loginName>david</loginName><password>Password1</password><phoneNumber>+9725239956</phoneNumber><stateProvince></stateProvince><zipcode>{PostalCode}</zipcode></AccountCreateRequest></soap:Body></soap:Envelope>", 
		EXTRARES, 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINNzcuMC4zODY1LjEyMBopCAUQARobCg0IBRAGGAEiAzAwMTABENe6BxoCGAiNd1-eIgQgASACKAEaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARC40wYaAhgIOQ5orSIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQ0aUGGgIYCGtQLgwiBCABIAIoARonCAEQARoZCg0IARAGGAEiAzAwMTADEBQaAhgISqPG7yIEIAEgAigDGigIARAIGhoKDQgBEAgYASIDMDAxMAQQ0BgaAhgIUGmk8yIEIAEgAigEGicICRABGhkKDQgJEAYYASIDMDAxMAYQAhoCGAi88WFLIgQgASACKAYaKAgPEAEaGgoNCA8QBhgBIgMwMDEwARD9FhoCGAhsH0eHIgQgASACKAEaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAVGgIYCL-ldC8iBCABIAIoARonCAoQCBoZCg"
		"0IChAIGAEiAzAwMTABEAUaAhgIdsexryIEIAEgAigBGigICBABGhoKDQgIEAYYASIDMDAxMAEQlAcaAhgIBPJ9GyIEIAEgAigBGigIDRABGhoKDQgNEAYYASIDMDAxMAEQ1VMaAhgIvjSBtiIEIAEgAigBGikIAxABGhsKDQgDEAYYASIDMDAxMAEQ-s8GGgIYCDOPfeAiBCABIAIoARopCA4QARobCg0IDhAGGAEiAzAwMTABEJfDAhoCGAgSxpFyIgQgASACKAEiAggB&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(17);

	web_custom_request("AccountCreateRequest_2", 
		"URL=http://{URL}/accountservice/AccountCreateRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://{URL}/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountCreateRequest xmlns=\"com.advantage.online.store.accountservice\"><accountType>20</accountType><address>{Address}</address><allowOffersPromotion>true</allowOffersPromotion><cityName>{City}</cityName><countryId>126</countryId><email>{Email}</email>"
		"<firstName>david</firstName><lastName>{LastName}</lastName><loginName>{UserName}</loginName><password>Password1</password><phoneNumber>+9725239956</phoneNumber><stateProvince></stateProvince><zipcode>{PostalCode}</zipcode></AccountCreateRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("SOAPAction");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLoginRequest");

	web_custom_request("AccountLoginRequest", 
		"URL=http://{URL}/accountservice/AccountLoginRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://{URL}/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email>{Email}</email><loginPassword>Password1</loginPassword><loginUser>{UserName}</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_url("976809851", 
		"URL=http://{URL}/order/api/v1/carts/976809851", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("CreateAcount",LR_AUTO);

	web_add_header("Origin", 
		"http://{URL}");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLogoutRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(34);

	web_custom_request("AccountLogoutRequest", 
		"URL=http://{URL}/accountservice/AccountLogoutRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://{URL}/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLogoutRequest xmlns=\"com.advantage.online.store.accountservice\"><loginUser>976809851</loginUser><base64Token>Basic ZGF2aWQxOlBhc3N3b3JkMQ==</base64Token></AccountLogoutRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("admin", 
		"URL=http://{URL}/admin", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/admin/static/js/2.9ba2109f.chunk.js", "Referer=http://{URL}/admin/", ENDITEM, 
		"Url=/admin/static/media/AOSCoverVideo1.07bef090.jpg", "Referer=http://{URL}/admin/static/css/main.ca43ec9a.chunk.css", ENDITEM, 
		"Url=/admin/static/media/Image_video2.fe4ef23e.jpg", "Referer=http://{URL}/admin/static/css/main.ca43ec9a.chunk.css", ENDITEM, 
		"Url=/admin/static/media/nav_bg.974c133e.png", "Referer=http://{URL}/admin/static/css/main.ca43ec9a.chunk.css", ENDITEM, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZnY68cjamJvMjLQ_UQXYkIy18gFM1JBQ=", "Referer=", ENDITEM, 
		"Url=/admin/static/media/Metric-Regular.928d99e3.otf", "Referer=http://{URL}/admin/static/css/main.ca43ec9a.chunk.css", ENDITEM, 
		"Url=/admin/static/media/Metric-Bold.7fdba351.ttf", "Referer=http://{URL}/admin/static/css/main.ca43ec9a.chunk.css", ENDITEM, 
		"Url=/admin/static/media/shapes.bc69ec67.svg", "Referer=http://{URL}/admin/static/css/main.ca43ec9a.chunk.css", ENDITEM, 
		"Url=/admin/static/media/Oval.b00ddb07.svg", "Referer=http://{URL}/admin/static/css/main.ca43ec9a.chunk.css", ENDITEM, 
		LAST);

	web_add_header("Origin", 
		"http://{URL}");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLoginRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(13);

	web_custom_request("AccountLoginRequest_2", 
		"URL=http://{URL}/accountservice/AccountLoginRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://{URL}/admin/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email></email><loginPassword>adm1n</loginPassword><loginUser>admin</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		EXTRARES, 
		"Url=../admin/static/media/Coming.65e23617.png", "Referer=http://{URL}/admin/coming-soon", ENDITEM, 
		"Url=../admin/static/media/Group.15dcbe87.png", "Referer=http://{URL}/admin/coming-soon", ENDITEM, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZ63RnmcePJZwjLWmrwjokFA==", "Referer=", ENDITEM, 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("admin_2", 
		"URL=http://{URL}/admin", 
		"Resource=0", 
		"Referer=http://{URL}/admin/coming-soon", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"http://{URL}");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLoginRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(11);

	web_custom_request("AccountLoginRequest_3", 
		"URL=http://{URL}/accountservice/AccountLoginRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://{URL}/admin/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email></email><loginPassword>Mercury</loginPassword><loginUser>mercury</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(5);

	web_url("{URL}_2", 
		"URL=http://{URL}/", 
		"Resource=0", 
		"Referer=http://{URL}/admin/coming-soon", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/services.properties", ENDITEM, 
		"Url=https://www.google-analytics.com/r/collect?v=1&_v=j79&a=79803716&t=pageview&_s=1&dl=http%3A%2F%2Fadm-aos%2F&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1200&vp=1920x1057&je=0&_u=AACAAEAB~&jid=1625070504&gjid=160061659&cid=1107875827.1572878185&tid=UA-81334227-1&_gid=1143202192.1572878185&_r=1&z=905859740", ENDITEM, 
		"Url=/app/tempFiles/popularProducts.json", ENDITEM, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j79&a=79803716&t=pageview&_s=2&dl=http%3A%2F%2Fadm-aos%2F&dp=%2F&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1200&vp=1920x1057&je=0&_u=CACAAEAB~&jid=&gjid=&cid=1107875827.1572878185&tid=UA-81334227-1&_gid=1143202192.1572878185&z=1266298568", ENDITEM, 
		LAST);

	web_url("ALL_2", 
		"URL=http://{URL}/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"http://{URL}");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountConfigurationRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetAccountConfigurationRequest_2", 
		"URL=http://{URL}/accountservice/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://{URL}/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_url("categories_2", 
		"URL=http://{URL}/catalog/api/v1/categories", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search_2", 
		"URL=http://{URL}/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html_2", 
		"URL=http://{URL}/app/views/home-page.html", 
		"Resource=0", 
		"Referer=http://{URL}/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	web_url("all_data_2", 
		"URL=http://{URL}/catalog/api/v1/categories/all_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,oimompecagnajdejgnnjijobebaeigek,gcmjkmgdlgnkkcocmoeiminaijmmjnii,llkgjffcdpffmhiakmfcdcblohccpfmo,mimojjlkmoijpicakmndhoigimigcmbb,giekcmmlnklenlaomppkphknjmnnpneh,gkmgaooipdjhmangpemjhigmamcehddo,jflookgnkcckhobaglndicnbbgbonegd,copjbmjbojbakpaedmpkhmiplmmehfck,aemomkdncapdnfajjbbcbdebjljbpmpj,ehgidpndbllacpjalkiimkbadgjfnnmc,khaoiebndkojlmppeemjhbpbandiljpe,hnimpnehoodheedghdeeijklkeaacbdc,hfnkpimlhhgieaddgfemjhofmfblmnib");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-77.0.3865.120");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=9:2389272882&cup2hreq=c0882ad1e0271c7a48c7dcf56e9296720ecacf25c8256940231e76491b0b868b", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{bc4b12d6-16a5-4a03-8f4f-3a6f1aa3b636}\",\"rd\":4690},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{86d7f3ef-0bb8-4ca1-af7c-d69d0d8563ad}\",\"rd\":4690},\"updatecheck\":{},\""
		"version\":\"4.10.1503.4\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:tjr@0.1,tg9@0.01\",\"cohorthint\":\"M54ToM99\",\"cohortname\":\"M54ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.33925ec460b3c33928517955ad22f48e94a3dd2ee2e3bc9abc2097510a0995e3\"}]},\"ping\":{\"ping_freshness\":\"{17764fdb-6149-42de-b55a-809e8d8fe57b}\",\"rd\":4690},\"updatecheck\":{},\"version\":\"9.5.3\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\""
		"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{114276cf-3afa-4bc6-94a8-5c0da61ed4a9}\",\"rd\":4690},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"mimojjlkmoijpicakmndhoigimigcmbb\",\"brand\":\"GGLS\",\"cohort\":\"1:d0j:\",\"cohorthint\":\"Chrome [M50... M99]\",\"cohortname\":\"Chrome [M50... M99]\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.24cde4588b40f22305dc906099e9966e71235010fb9c247f15c004c664e4dba4\"}]},\"ping\":{\"ping_freshness\":\""
		"{c523eb2e-77a1-413f-9303-b1d344aeabb1}\",\"rd\":4690},\"updatecheck\":{},\"version\":\"32.0.0.270\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"}]},\"ping\":{\"ping_freshness\":\"{fd9ef684-761d-4688-b090-6b99c1114b1a}\",\"rd\":4690},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\""
		"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GGLS\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.38c5c0935292576a47833bf31d64672cb5ea7cafe9255b466f3963366445d5b0\"}]},\"ping\":{\"ping_freshness\":\"{92d0eec7-6b03-4397-870c-85e104218efb}\",\"rd\":4690},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"77.223.200\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\""
		"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.0582d9b5b6183805052da02783205f3f75c69fa42e25513c80f188cade82cfa0\"}]},\"ping\":{\"ping_freshness\":\"{6e656145-323b-49ff-ba82-d7da8708f96a}\",\"rd\":4690},\"updatecheck\":{},\"version\":\"8\"},{\"appid\":\"copjbmjbojbakpaedmpkhmiplmmehfck\",\"brand\":\"GGLS\",\"cohort\":\"1:p1x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.207921137eee9c0831e0bd890330986c10dfd9382034491b82de3f86ae6915f7\"}]},\"ping\":{\"ping_freshness\":\"{f2d1dece-1772-46bd-a2e8-2913d3e988a2}\",\"rd\":4690},\"updatecheck\":{},\"version\":\"2018.9.6.0\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"GGLS\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{80f99d38-7e56-481d-9214-1f7e8e876b60}\",\"rd\":4690},\"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl"
		":\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{c36ac307-bd4a-45a3-940b-322769c79c2a}\",\"rd\":4690},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\""
		"fp\":\"1.171a08761907d045656f16e1c9611ccc859ebbfccc4a315290f337d1ea1a2b4c\"}]},\"ping\":{\"ping_freshness\":\"{207133e3-0b50-46e3-85e1-4b82025d3f2b}\",\"rd\":4690},\"updatecheck\":{},\"version\":\"37\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GGLS\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.1cd7dc2056afaa0f6a705c9a17d22bba6578b33f5dae9e2d6518a0bfcced2396\"}]},\"ping\":{\"ping_freshness\":\"{929df77e-220d-4621-906a-1e0259ee33d4}\",\"rd\":4690},\"updatecheck\":{},\""
		"version\":\"0.57.44.2492\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.fd16cd3d9e3ed9426a9edf49c207f7691252247d3c381a309f9e4e6e0820a1f4\"}]},\"ping\":{\"ping_freshness\":\"{11b29cff-9f0a-4c6b-90d4-fe58679de5e4}\",\"rd\":4690},\"updatecheck\":{},\"version\":\"5498\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":16},"
		"\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"6.3.9600.19431\"},\"prodversion\":\"77.0.3865.120\",\"protocol\":\"3.1\",\"requestid\":\"{2479015d-b1f3-44b4-9713-773b5018d6df}\",\"sessionid\":\"{4cef9cef-b68f-4839-b145-29df5628da80}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.301\"},\"updaterversion\":\"77.0.3865.120\"}}", 
		LAST);

	return 0;
}