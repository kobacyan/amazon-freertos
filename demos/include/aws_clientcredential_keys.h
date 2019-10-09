#ifndef AWS_CLIENT_CREDENTIAL_KEYS_H
#define AWS_CLIENT_CREDENTIAL_KEYS_H

#include <stdint.h>

/*
 * PEM-encoded client certificate.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----"
 */
#define keyCLIENT_CERTIFICATE_PEM \
"-----BEGIN CERTIFICATE-----\n"\
"MIIDWjCCAkKgAwIBAgIVAK6UJazNyri80fZ31M142WpkQ/3PMA0GCSqGSIb3DQEB\n"\
"CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n"\
"IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0xOTEwMDkwMjA0\n"\
"MTJaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n"\
"dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQDH6Pp3uPf5S96uRQ7V\n"\
"wMEO/DOpS5wLB49ko9eeAsglJo+asyipmmIlWcigBx/8C+5qbfTOUbmwGBpgEegW\n"\
"K1KZbZEgZShqmPM4kMuBe4zpOtekH14ivd258zpt0zYW8FHsarXLtQvZ6S0Pu8Fy\n"\
"tZW2/PW/qwjEJnc63Dvo8RY2znBKvLgeC1+JcsVgKXAyB3d8DsuO48/fsySQIRIL\n"\
"ZbawdlGlW1s6YHa9I0nqqll/cH2WqiW7GuVIKGQ+/uYODXvmmheHzOwyzut6r7vo\n"\
"wc+KHBTJh+bBqH+9eJCnB2kt9uwauL99mJ4Xllb9feTeYoT8/SKPvk61RZ+20auM\n"\
"wc4BAgMBAAGjYDBeMB8GA1UdIwQYMBaAFLOKDaPIanKzEg7El72U+k1O8+iqMB0G\n"\
"A1UdDgQWBBTbSSkCCLdJVvMJSbHulZO5jMfOAjAMBgNVHRMBAf8EAjAAMA4GA1Ud\n"\
"DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAZhODaIHrUM0Dn5RSECExtm/N\n"\
"x+g4OWpGlDv1xnTYLOFwNIhLaEpRH6QmylSRkMeNi1G8ErMS0vAjq67lvlLoRBVd\n"\
"ynFwibPH/MxeTRkUj7zXS3Od12znFh8EynnkZbLTOJGUOZP6lBJzvafvmoY6LIvX\n"\
"aYn4FOrSmlS4bsze6eRg1xV4zto9XGzXEZPZ8gJQIEjlkqsNH/3qZariHjMWlFgG\n"\
"HOETtR+roGaMUdFFWmyYR1nN/96mUwfyU7lBrSonXWENjSvilInGY/ttGelMdxuW\n"\
"mRmzjr5j2uTBY7dlBrywrFrnvQh5R3oGtK0+2mzO/oD3FWWoX//QkROi/iuw8w==\n"\
"-----END CERTIFICATE-----"

/*
 * PEM-encoded client private key.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN RSA PRIVATE KEY-----\n"\
 * "...base64 data...\n"\
 * "-----END RSA PRIVATE KEY-----"
 */
#define keyCLIENT_PRIVATE_KEY_PEM \
"-----BEGIN RSA PRIVATE KEY-----\n"\
"MIIEpAIBAAKCAQEAx+j6d7j3+UverkUO1cDBDvwzqUucCwePZKPXngLIJSaPmrMo\n"\
"qZpiJVnIoAcf/Avuam30zlG5sBgaYBHoFitSmW2RIGUoapjzOJDLgXuM6TrXpB9e\n"\
"Ir3dufM6bdM2FvBR7Gq1y7UL2ektD7vBcrWVtvz1v6sIxCZ3Otw76PEWNs5wSry4\n"\
"HgtfiXLFYClwMgd3fA7LjuPP37MkkCESC2W2sHZRpVtbOmB2vSNJ6qpZf3B9lqol\n"\
"uxrlSChkPv7mDg175poXh8zsMs7req+76MHPihwUyYfmwah/vXiQpwdpLfbsGri/\n"\
"fZieF5ZW/X3k3mKE/P0ij75OtUWfttGrjMHOAQIDAQABAoIBAQCiSk0r7InDZQh+\n"\
"SanldfpFBBGcmrkvaw/KEAj3SiLZphhm6pNUPPT4hY8N+zrID5eZ53IaHNa2Upr2\n"\
"6xKTDNCdpglvVzAcedbaURIlJ/wZS5/MqXpukdzzHLaOei0rKiYX2/mCSpQ4b8gZ\n"\
"Qb+mNCw6xdlrpJoVQ3T/39LzJOV3z2b3exIQSc6bfKEvPou2bVndLrxcr9nz7zzb\n"\
"fuLFKW/+UB1RgVJa3OMxF6x/ThIp20IqjMfgjvferwsqA/AzjoFaU+AkMR2cIP7r\n"\
"hApqJrAZf6Koz1el6CVB+KyUifu28L+rskZm898ycas04SOVXg22hxlvdGKbdBhL\n"\
"hKjY1E/BAoGBAPjYfFtJGlgylgtC79BhKxnyWadYQCs6xZYPftQ7IS5na6c7Sc+8\n"\
"nwKceH2socNfvpz+0vQu2lLFeuVePKzOr/BIw83BWQyMjZgy7w2z8aJfwvUA0Pe6\n"\
"yPcRSAeC+kF6VHsWZNujWijqCHZUzdR8NYhTjkw38vGPOzQM+Ov8ls9lAoGBAM2o\n"\
"UyPThJQ3/oVcERiGvJticQUiAXoq+a2hZJBwdO6j7Ib0RCUi9BnZ5xIc1wToczXF\n"\
"K+zK1CdbNUC0w95AbiGytrsjRfYuabCuksmBvKFWYsQXOzuuKo+52G5wmjGIRQFs\n"\
"LGLCWRDGsiFfjHmEGYhymGQaBeb+ec1hdJFOZYBtAoGBALP+gxTUb8XT8Uv8AtLL\n"\
"Ng3yin7NCr06Kak9VBPXIU0baXbxH5avbKTK4SymLevP2WRdveD58tlkFlzKKUEl\n"\
"z4USXO77J5o4IEMytE9JFULJ2Y62JHDMHoj3aw5j4vhxr6HItPNZ2OE3Rx+wf6Fu\n"\
"ppoRNiBTZ9rqK3ye1X58mekxAoGAQBnGCDWmbjhhuZlvrrBYWyo8xffKdBSvC+Jx\n"\
"IOAcYkFvuMSr9NNHOEOF1Uxt7JazSkAxp7W0mKvCFnABWOXGLfSxJfUhmlDvGmXf\n"\
"VLV+YN83G52OFdT8aR3pCstIFEZAE+hukT24WxVDckmA1GNLPg9R1mmSC2Sn/E7y\n"\
"8VN5KaUCgYAcqDam985YgkjHYYp1vGaxFeh/6gw2Qyo9Ns/4MocgQDIbm+zl6N6D\n"\
"WZNG/amb01/NdFXwYQikW6avAR2nU7bC8ulA/I1ImNQwZd2I8OF+CNW0qY2PbRdg\n"\
"iwMyP1e5aXR6Umgxe40yHtOvWEty3pfrZ9bcjNXJEqpNrXLMdVw/FA==\n"\
"-----END RSA PRIVATE KEY-----"

/*
 * PEM-encoded Just-in-Time Registration (JITR) certificate (optional).
 *
 * If used, must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----"
 */
#define keyJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM  ""


#endif /* AWS_CLIENT_CREDENTIAL_KEYS_H */
