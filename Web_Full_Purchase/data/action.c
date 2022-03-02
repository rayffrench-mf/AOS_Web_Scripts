Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_user("admin", 
		lr_unmask("5dc019962306b9d056"), 
		"adm-aos:8080");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=77", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t1.inf", 
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
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	lr_start_transaction("URL");

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
		LAST);

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=adm-aos");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("adm-aos:8080", 
		"URL=http://adm-aos:8080/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/main.min.js", ENDITEM, 
		"Url=/services.properties", ENDITEM, 
		"Url=/css/images/logo.png", ENDITEM, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=http://adm-aos:8080/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=http://adm-aos:8080/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=http://adm-aos:8080/css/main.min.css", ENDITEM, 
		"Url=/css/images/closeDark.png", ENDITEM, 
		"Url=/css/images/arrow_right.png", "Referer=http://adm-aos:8080/css/main.min.css", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1237", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1235", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1236", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1238", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1234", ENDITEM, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=http://adm-aos:8080/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=http://adm-aos:8080/css/main.min.css", ENDITEM, 
		"Url=/css/images/Special-offer.jpg", ENDITEM, 
		"Url=/css/images/GoUp.png", ENDITEM, 
		"Url=/css/images/linkedin.png", ENDITEM, 
		"Url=/css/images/twitter.png", ENDITEM, 
		"Url=/css/images/facebook.png", ENDITEM, 
		"Url=/css/images/Banner1.jpg", ENDITEM, 
		"Url=/css/images/Banner2.jpg", ENDITEM, 
		"Url=/css/images/Banner3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item2.jpg", ENDITEM, 
		"Url=/css/images/Popular-item1.jpg", ENDITEM, 
		"Url=/css/images/FacebookLogo.png", "Referer=http://adm-aos:8080/css/main.min.css", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1700", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=2200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5400", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1600", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=11100", ENDITEM, 
		"Url=/css/images/Filter.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1245", ENDITEM, 
		"Url=/css/images/Bell.png", "Referer=http://adm-aos:8080/css/main.min.css", ENDITEM, 
		"Url=/css/images/Check.png", "Referer=http://adm-aos:8080/css/main.min.css", ENDITEM, 
		"Url=/css/images/Shipex.png", ENDITEM, 
		"Url=/css/images/User.jpg", ENDITEM, 
		LAST);

	web_url("ALL", 
		"URL=http://adm-aos:8080/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://adm-aos:8080/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"http://adm-aos:8080");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountConfigurationRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=http://adm-aos:8080/accountservice/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://adm-aos:8080/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_url("categories", 
		"URL=http://adm-aos:8080/catalog/api/v1/categories", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://adm-aos:8080/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZN0GsyAN9T9UjLeeNQA4kIy3OQUx6JCMteG8SGSQjLQ8WviskFA==", "Referer=", ENDITEM, 
		LAST);

	web_url("search", 
		"URL=http://adm-aos:8080/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://adm-aos:8080/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_url("popularProducts.json", 
		"URL=http://adm-aos:8080/app/tempFiles/popularProducts.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://adm-aos:8080/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html", 
		"URL=http://adm-aos:8080/app/views/home-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://adm-aos:8080/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZXaM-FVW3SOkjLeeNQA4kIy3OQUx6JCMteG8SGSQjLQ8WviskIy2E5pjgJCMt9nKYWSQjLcd2OFAkIy1axjztJCMtcpdcLyQU", "Referer=", ENDITEM, 
		LAST);

	web_url("all_data", 
		"URL=http://adm-aos:8080/catalog/api/v1/categories/all_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://adm-aos:8080/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("URL",LR_AUTO);

	lr_start_transaction("Login");

	web_add_header("Origin", 
		"http://adm-aos:8080");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLoginRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(9);

	web_custom_request("AccountLoginRequest", 
		"URL=http://adm-aos:8080/accountservice/AccountLoginRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://adm-aos:8080/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email></email><loginPassword>adm1n</loginPassword><loginUser>admin</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

	web_url("741696325", 
		"URL=http://adm-aos:8080/order/api/v1/carts/741696325", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://adm-aos:8080/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Login",LR_AUTO);

	lr_start_transaction("search");

	web_url("search-page.html", 
		"URL=http://adm-aos:8080/app/views/search-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://adm-aos:8080/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"http://adm-aos:8080");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLoginRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("AccountLoginRequest_2", 
		"URL=http://adm-aos:8080/accountservice/AccountLoginRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://adm-aos:8080/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email></email><loginPassword>adm1n</loginPassword><loginUser>admin</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_url("741696325_2", 
		"URL=http://adm-aos:8080/order/api/v1/carts/741696325", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://adm-aos:8080/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZnB712O_o-58jLeeNQA4kIy3OQUx6JCMteG8SGSQjLQ8WviskIy2E5pjgJBQ=", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(13);

	lr_start_transaction("select_item");

	web_url("product-page.html", 
		"URL=http://adm-aos:8080/app/views/product-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://adm-aos:8080/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZ4CDYOkELF8cjLeeNQA4kIy3OQUx6JCMteG8SGSQjLQ8WviskIy3yF2yJJBQ=", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("select_item",LR_AUTO);

	lr_start_transaction("Add_to_cart");

	web_add_header("Origin", 
		"http://adm-aos:8080");

	lr_think_time(28);

	web_submit_data("C3C3C3", 
		"Action=http://adm-aos:8080/order/api/v1/carts/741696325/product/1/color/C3C3C3?quantity=1", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://adm-aos:8080/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=sessionId", "Value=E464A8C4EDD15715F974EACACE2C76A4", ENDITEM, 
		LAST);

	lr_end_transaction("Add_to_cart",LR_AUTO);

	lr_end_transaction("search",LR_AUTO);

	lr_think_time(22);

	lr_start_transaction("check_out");

	web_url("741696325_3", 
		"URL=http://adm-aos:8080/order/api/v1/carts/741696325", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://adm-aos:8080/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_url("shoppingCart.html", 
		"URL=http://adm-aos:8080/app/views/shoppingCart.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://adm-aos:8080/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountByIdRequest");

	web_add_auto_header("Origin", 
		"http://adm-aos:8080");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(13);

	web_custom_request("GetAccountByIdRequest", 
		"URL=http://adm-aos:8080/accountservice/GetAccountByIdRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://adm-aos:8080/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>741696325</accountId><base64Token>Basic YWRtaW46YWRtMW4=</base64Token></GetAccountByIdRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountByIdNewRequest");

	web_custom_request("GetAccountByIdNewRequest", 
		"URL=http://adm-aos:8080/accountservice/GetAccountByIdNewRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://adm-aos:8080/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdNewRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>741696325</accountId><base64Token>Basic YWRtaW46YWRtMW4=</base64Token></GetAccountByIdNewRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_url("741696325_4", 
		"URL=http://adm-aos:8080/order/api/v1/carts/741696325", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://adm-aos:8080/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"http://adm-aos:8080");

	web_custom_request("shippingcost", 
		"URL=http://adm-aos:8080/order/api/v1/shippingcost/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://adm-aos:8080/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"seaddress\":{\"addressLine1\":\"address\",\"addressLine2\":\"\",\"city\":\"New York\",\"country\":\"us\",\"postalCode\":10017,\"state\":\"NY\"},\"secustomerName\":\"John Smith\",\"secustomerPhone\":\"480-222-1111\",\"senumberOfProducts\":1,\"setransactionType\":\"SHIPPING_COST\",\"sessionId\":\"E464A8C4EDD15715F974EACACE2C76A4\"}", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountPaymentPreferencesRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetAccountPaymentPreferencesRequest", 
		"URL=http://adm-aos:8080/accountservice/GetAccountPaymentPreferencesRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://adm-aos:8080/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountPaymentPreferencesRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>741696325</accountId><base64Token>Basic YWRtaW46YWRtMW4=</base64Token></GetAccountPaymentPreferencesRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("Origin");

	web_url("orderPayment-page.html", 
		"URL=http://adm-aos:8080/app/order/views/orderPayment-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://adm-aos:8080/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZDI39wT_HgHwjLeeNQA4kIy3OQUx6JCMteG8SGSQjLQ8WviskIy3vv41zJCMtAKALyiQjLXMQPlokIy1FLVZMJCMtRmcVfSQjLZTUWx4kIy1u1ykLJCMtjKpmfSQjLbCcDgwkIy1-3NXUJCMto4qzhCQjLRksxIokIy03PHMEJCMtk6gDlSQjLV7r9L0kFA==", "Referer=", ENDITEM, 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetCountriesRequest");

	web_add_auto_header("Origin", 
		"http://adm-aos:8080");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetCountriesRequest", 
		"URL=http://adm-aos:8080/accountservice/GetCountriesRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://adm-aos:8080/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetCountriesRequest xmlns=\"com.advantage.online.store.accountservice\"></GetCountriesRequest></soap:Body></soap:Envelope>", 
		LAST);

	lr_start_transaction("Pay");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceUpdateSafePayMethodRequest");

	lr_think_time(28);

	web_custom_request("UpdateSafePayMethodRequest", 
		"URL=http://adm-aos:8080/accountservice/UpdateSafePayMethodRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://adm-aos:8080/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><UpdateSafePayMethodRequest xmlns=\"com.advantage.online.store.accountservice\"><userId>741696325</userId><safePayUsername>admin</safePayUsername><safePayPassword>Adm1n</safePayPassword><referenceId>1234567890</referenceId><base64Token>Basic YWRtaW46YWRtMW4=</"
		"base64Token></UpdateSafePayMethodRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_custom_request("741696325_5", 
		"URL=http://adm-aos:8080/order/api/v1/orders/users/741696325", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://adm-aos:8080/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"orderPaymentInformation\":{\"Transaction_AccountNumber\":\"843200971\",\"Transaction_Currency\":\"USD\",\"Transaction_CustomerPhone\":\"480-222-1111\",\"Transaction_MasterCredit_CVVNumber\":\"\",\"Transaction_MasterCredit_CardNumber\":\"4886\",\"Transaction_MasterCredit_CustomerName\":\"\",\"Transaction_MasterCredit_ExpirationDate\":\"122027\",\"Transaction_PaymentMethod\":\"SafePay\",\"Transaction_ReferenceNumber\":0,\"Transaction_SafePay_Password\":\"Adm1n\",\""
		"Transaction_SafePay_UserName\":\"admin\",\"Transaction_TransactionDate\":\"04112019\",\"Transaction_Type\":\"PAYMENT\"},\"orderShippingInformation\":{\"Shipping_Address_Address\":\"address\",\"Shipping_Address_City\":\"New York\",\"Shipping_Address_CountryCode\":40,\"Shipping_Address_CustomerName\":\"John Smith\",\"Shipping_Address_CustomerPhone\":\"480-222-1111\",\"Shipping_Address_PostalCode\":10017,\"Shipping_Address_State\":\"NY\",\"Shipping_Cost\":519.99,\"Shipping_NumberOfProducts\":1,\""
		"Shipping_TrackingNumber\":0},\"purchasedProducts\":[{\"hexColor\":\"C3C3C3\",\"productId\":1,\"quantity\":1}]}", 
		LAST);

	web_custom_request("741696325_6", 
		"URL=http://adm-aos:8080/order/api/v1/carts/741696325", 
		"Method=DELETE", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://adm-aos:8080/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Pay",LR_AUTO);

	lr_end_transaction("check_out",LR_AUTO);

	lr_start_transaction("logout");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLogoutRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(36);

	web_custom_request("AccountLogoutRequest", 
		"URL=http://adm-aos:8080/accountservice/AccountLogoutRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://adm-aos:8080/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLogoutRequest xmlns=\"com.advantage.online.store.accountservice\"><loginUser>741696325</loginUser><base64Token>Basic YWRtaW46YWRtMW4=</base64Token></AccountLogoutRequest></soap:Body></soap:Envelope>", 
		LAST);

	lr_end_transaction("logout",LR_AUTO);

	return 0;
}