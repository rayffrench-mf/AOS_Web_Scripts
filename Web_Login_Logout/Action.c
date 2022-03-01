Action()
{

	web_set_user("admin", 
		lr_unmask("5dbff395b85cf1cf5b"), 
		"{URL}");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=adm-aos");

	web_url("{URL}", 
		"URL=http://{URL}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/main.min.js", ENDITEM, 
		"Url=/services.properties", ENDITEM, 
		"Url=/css/images/logo.png", ENDITEM, 
		"Url=/css/images/closeDark.png", ENDITEM, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=http://{URL}/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=http://{URL}/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=http://{URL}/css/main.min.css", ENDITEM, 
		"Url=https://www.google-analytics.com/analytics.js", ENDITEM, 
		"Url=https://www.google-analytics.com/r/collect?v=1&_v=j79&a=1599360580&t=pageview&_s=1&dl=http%3A%2F%2Fadm-aos%2F&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1200&vp=1920x1057&je=0&_u=IEBAAEAB~&jid=247331336&gjid=1940143684&cid=732987440.1572860698&tid=UA-81334227-1&_gid=1453451630.1572860698&_r=1&z=542420221", ENDITEM, 
		"Url=/css/images/arrow_right.png", "Referer=http://{URL}/css/main.min.css", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1236", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1237", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1235", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1238", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1234", ENDITEM, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=http://{URL}/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=http://{URL}/css/main.min.css", ENDITEM, 
		"Url=/css/images/Special-offer.jpg", ENDITEM, 
		"Url=/css/images/facebook.png", ENDITEM, 
		"Url=/css/images/GoUp.png", ENDITEM, 
		"Url=/css/images/twitter.png", ENDITEM, 
		"Url=/css/images/linkedin.png", ENDITEM, 
		"Url=/css/images/Banner1.jpg", ENDITEM, 
		"Url=/css/images/Banner2.jpg", ENDITEM, 
		"Url=/css/images/Popular-item3.jpg", ENDITEM, 
		"Url=/css/images/Banner3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item2.jpg", ENDITEM, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j79&a=1599360580&t=pageview&_s=2&dl=http%3A%2F%2Fadm-aos%2F&dp=%2F&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1200&vp=1920x1057&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=732987440.1572860698&tid=UA-81334227-1&_gid=1453451630.1572860698&z=1799955492", ENDITEM, 
		"Url=/css/images/Popular-item1.jpg", ENDITEM, 
		"Url=/css/images/FacebookLogo.png", "Referer=http://{URL}/css/main.min.css", ENDITEM, 
		"Url=https://www.google-analytics.com/r/collect?v=1&_v=j79&a=1599360580&t=event&_s=3&dl=http%3A%2F%2Fadm-aos%2F&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1920x1200&vp=1920x1057&je=0&ec=Account&ea=signIn&_u=KEBAAEAB~&jid=2136973828&gjid=1873648838&cid=732987440.1572860698&tid=UA-81334227-1&_gid=1453451630.1572860698&_r=1&z=2130442800", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Goog-Update-AppId", 
		"aohghmighlieiainnegkcijnfilokake,apdfllckaahabafndbhieahigkjlhalf,blpcfgokakmgnkcojhhkbfbldkacnbeo,ghbmnnjooekpmoecnnnilnnbdlolhkhi,nmmhkkegccagdldgiimedpiccmgmieda,pjkljhegncpnkpknbcohdijeoejaedia,pkedcjkdefgpdelpbcmbmeomcjbeemfm");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-77.0.3865.120");

	web_url("crx", 
		"URL=https://clients2.google.com/service/update2/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=chromecrx&prodchannel=&prodversion=77.0.3865.120&lang=en-US&acceptformat=crx2,crx3&x=id%3Daohghmighlieiainnegkcijnfilokake%26v%3D0.10%26installedby%3Dinternal%26uc%26ping%3Dr%253D4%2526e%253D1&x=id%3Dapdfllckaahabafndbhieahigkjlhalf%26v%3D14.1%26installedby%3Dinternal%26uc%26ping%3Dr%253D4%2526e%253D1&x="
		"id%3Dblpcfgokakmgnkcojhhkbfbldkacnbeo%26v%3D4.2.8%26installedby%3Dinternal%26uc%26ping%3Dr%253D4%2526e%253D1&x=id%3Dghbmnnjooekpmoecnnnilnnbdlolhkhi%26v%3D1.7%26installedby%3Dexternal%26uc%26ping%3Dr%253D4%2526e%253D1&x=id%3Dnmmhkkegccagdldgiimedpiccmgmieda%26v%3D1.0.0.5%26installedby%3Dother%26uc%26ping%3Dr%253D4%2526e%253D1&x=id%3Dpjkljhegncpnkpknbcohdijeoejaedia%26v%3D8.2%26installedby%3Dinternal%26uc%26ping%3Dr%253D4%2526e%253D1&x="
		"id%3Dpkedcjkdefgpdelpbcmbmeomcjbeemfm%26v%3D7719.805.0.2%26installedby%3Dother%26uc%26ping%3Dr%253D4%2526e%253D1", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

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
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"Body= ", 
		EXTRARES, 
		"Url=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=77", "Referer=", ENDITEM, 
		LAST);

	web_revert_auto_header("Sec-Fetch-Site");

	lr_start_transaction("AOS_URL");
	
	web_url("ALL", 
		"URL=http://{URL}/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/", 
		"Snapshot=t4.inf", 
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
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_url("categories", 
		"URL=http://{URL}/catalog/api/v1/categories", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZN0GsyAN9T9UjLeeNQA4kIy3OQUx6JCMteG8SGSQjLQ8WviskFA==", "Referer=", ENDITEM, 
		LAST);

	web_add_cookie("_ga=GA1.1.732987440.1572860698; DOMAIN=adm-aos");

	web_add_cookie("_gid=GA1.1.1453451630.1572860698; DOMAIN=adm-aos");

	web_add_cookie("_gat=1; DOMAIN=adm-aos");

	web_url("search", 
		"URL=http://{URL}/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_url("popularProducts.json", 
		"URL=http://{URL}/app/tempFiles/popularProducts.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html", 
		"URL=http://{URL}/app/views/home-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{URL}/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZXaM-FVW3SOkjLeeNQA4kIy3OQUx6JCMteG8SGSQjLQ8WviskIy2E5pjgJCMt9nKYWSQjLcd2OFAkIy1axjztJCMtcpdcLyQU", "Referer=", ENDITEM, 
		LAST);

	web_url("all_data", 
		"URL=http://{URL}/catalog/api/v1/categories/all_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", "Referer=", ENDITEM, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", "Referer=", ENDITEM, 
		LAST);

	

	lr_end_transaction("AOS_URL",LR_AUTO);

	lr_start_transaction("Login");

	lr_start_transaction("Username");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_url("plugins_win.json", 
		"URL=https://www.gstatic.com/chrome/config/plugins_3/plugins_win.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINNzcuMC4zODY1LjEyMBopCAUQARobCg0IBRAGGAEiAzAwMTABEO63BxoCGAhuo6iVIgQgASACKAEaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARCZ0QYaAhgIAlOU-yIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQ8aIGGgIYCHtFEO0iBCABIAIoARonCAEQARoZCg0IARAGGAEiAzAwMTADEBQaAhgISqPG7yIEIAEgAigDGigIARAIGhoKDQgBEAgYASIDMDAxMAQQzhgaAhgI3GIveiIEIAEgAigEGicICRABGhkKDQgJEAYYASIDMDAxMAYQAhoCGAi88WFLIgQgASACKAYaKAgPEAEaGgoNCA8QBhgBIgMwMDEwARDfFhoCGAhH_0O8IgQgASACKAEaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAVGgIYCL-ldC8iBCABIAIoARonCAoQCBoZCg"
		"0IChAIGAEiAzAwMTABEAUaAhgIdsexryIEIAEgAigBGigICBABGhoKDQgIEAYYASIDMDAxMAEQkAcaAhgIzEHGRyIEIAEgAigBGigIDRABGhoKDQgNEAYYASIDMDAxMAEQhlMaAhgIGoa2biIEIAEgAigBGikIAxABGhsKDQgDEAYYASIDMDAxMAEQ_M0GGgIYCICfFsAiBCABIAIoARopCA4QARobCg0IDhAGGAEiAzAwMTABELDAAhoCGAhITdcZIgQgASACKAEiAggB&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("Username",LR_AUTO);

	lr_start_transaction("Password");

	lr_end_transaction("Password",LR_AUTO);

	web_custom_request("experimentstatus", 
		"URL=https://clients4.google.com/chrome-sync/experimentstatus", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x0Bgcm_channel", 
		LAST);

	lr_start_transaction("sigh_in");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Origin", 
		"http://{URL}");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLoginRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(7);

	web_custom_request("AccountLoginRequest", 
		"URL=http://{URL}/accountservice/AccountLoginRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://{URL}/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email></email><loginPassword>adm1n</loginPassword><loginUser>admin</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

	web_url("741696325", 
		"URL=http://{URL}/order/api/v1/carts/741696325", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{URL}/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("sigh_in",LR_AUTO);

	lr_end_transaction("Login",LR_AUTO);

	lr_start_transaction("Logout");

	web_add_header("Origin", 
		"http://{URL}");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLogoutRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(26);

	web_custom_request("AccountLogoutRequest", 
		"URL=http://{URL}/accountservice/AccountLogoutRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://{URL}/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLogoutRequest xmlns=\"com.advantage.online.store.accountservice\"><loginUser>741696325</loginUser><base64Token>Basic YWRtaW46YWRtMW4=</base64Token></AccountLogoutRequest></soap:Body></soap:Envelope>", 
		LAST);

	lr_end_transaction("Logout",LR_AUTO);

	return 0;
}