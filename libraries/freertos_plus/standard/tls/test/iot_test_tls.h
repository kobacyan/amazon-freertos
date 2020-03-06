/*
 * FreeRTOS TLS V1.1.7
 * Copyright (C) 2020 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://aws.amazon.com/freertos
 * http://www.FreeRTOS.org
 */

#ifndef _AWS_TLS_TEST_H_
#define _AWS_TLS_TEST_H_

/*
 * PEM-encoded client certificate.
 *
 * Certificate for P-256 elliptic curve key.
 */
static const char tlstestCLIENT_CERTIFICATE_PEM_EC[] = "-----BEGIN CERTIFICATE-----\n"
"MIICkjCCAXqgAwIBAgIVAI8wzix1umV2BVQlPGodLIzaU+x3MA0GCSqGSIb3DQEB\n"
"CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n"
"IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0yMDAzMDUwNjAx\n"
"MjNaFw00OTEyMzEyMzU5NTlaMCExEzARBgNVBAoTCkFtYXpvbi5jb20xCjAIBgNV\n"
"BAMMASowWTATBgcqhkjOPQIBBggqhkjOPQMBBwNCAAQMXNC66qbTTHPWz69hcjP+\n"
"deypcTUXng/mEYCP3cJR0+F8r8yHnOEa2HfHxvG15flzw9DefIRErwUeeg9sX4H5\n"
"o2AwXjAfBgNVHSMEGDAWgBReSeg2ZQtRKAmoANWvE7UJje4l+zAdBgNVHQ4EFgQU\n"
"MJKN7hkj7fOCgsZ9LCdvCrebGhgwDAYDVR0TAQH/BAIwADAOBgNVHQ8BAf8EBAMC\n"
"B4AwDQYJKoZIhvcNAQELBQADggEBALY9LREFBgAfW+Y7suPTALC/EX9srMUSjN4z\n"
"AloVa1NjVle5w/pk+mxsuJdXb1kwhkLvKaYW8Zv/icXsilvFSkFkzJPVl1U6kryi\n"
"UWE0M80CnbgWQEPWngdG5tpAM/VkdPNi6KxVPowrcCfcw6R+ienXk202ka7yl9NR\n"
"Xx5mWzQYYFYCAMlWX6sxfn4jwRT4GfHafcyeoNgXzEntRwpmmWABJWTSDDqpfyGm\n"
"zVzJ8lZrV4vdQaYzlh9Y9QS5BlNXg8nNvJzXoaf55AQ74Qn5992Rwm057b93+Ftl\n"
"lno0HJw1fJPgdW4PL3IFhgcaZx0/+etTYGrWoqpGxx0AK/JQRDc=\n"
"-----END CERTIFICATE-----\n";

/*
 * PEM-encoded client private key.
 *
 * This is a P-256 elliptic curve key.
 */
static const char tlstestCLIENT_PRIVATE_KEY_PEM_EC[] = "-----BEGIN EC PRIVATE KEY-----\n"
"MHcCAQEEIIOE3AZTnSZuLFxEfMSV0F/tiIkRogna2lIPyoR5bML7oAoGCCqGSM49\n"
"AwEHoUQDQgAEDFzQuuqm00xz1s+vYXIz/nXsqXE1F54P5hGAj93CUdPhfK/Mh5zh\n"
"Gth3x8bxteX5c8PQ3nyERK8FHnoPbF+B+Q==\n"
"-----END EC PRIVATE KEY-----\n";

/* One character of this certificate has been changed in the issuer
 * name from Amazon Web Services to Amazon Web Cervices. */
static const char tlstestCLIENT_CERTIFICATE_PEM_MALFORMED[] = "-----BEGIN CERTIFICATE-----\n"
"MIIDWjCCAkKgAwIBAgIVAJuMLCL9k7bhXrrFjcoCCTl+JTQ3MA0GCSqGSIb3DQEB\n"
"CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgQ2VydmljZXMgTz1BbWF6b24uY29t\n"
"IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0yMDAzMDUwNjAx\n"
"MjFaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n"
"dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQC1vIXdxqK5v8T08ifh\n"
"P8pvH1AIQ1YW9bLOhjDe7foGLfzdLJkazK6aEt6UtFOr+c0ZhzE0373CctdSUOnL\n"
"ywTNjhnvtJiDgMq3jI+wQUVH4ZYC6blf1sngxA54Q1k5cUfgTHWKLFqqQtIyFX4/\n"
"5u6L2hK0dTYMsEQoBSOE52BjBj/HQIKU1/i1qaQd+P4Z8YOnb1Hl36+OPEMMjEHC\n"
"M0PpPlS5GMLNwIMHZLuxjTfrUlun6xk+o6CR58KTNvMhuRkZ/xX7Mfs5kfYtA+pT\n"
"TQ4Fje/pemjPnreM/DfCY8Mzk58MpZDjdVi+Tj0lclCX5nLTzVfpnrjLeTPNXign\n"
"GDvNAgMBAAGjYDBeMB8GA1UdIwQYMBaAFOgGnF9Wyfjz5OPcc5PKvbPav2KZMB0G\n"
"A1UdDgQWBBSgMGDx761IoilWiNhnRoxkMvcMjTAMBgNVHRMBAf8EAjAAMA4GA1Ud\n"
"DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEADpxr+9z0qHY3D39nXtpwHOF5\n"
"mBxsnYahRCrrVqaLvpZ/DcM6efe5//SPOOfGEjZDPkmj7THJTgsKU91ceYcR6SZo\n"
"ZYXceMmIjdcR2S5W61deOierPkfgxB333vrmgENRXliWQzsSn7s5mUYX8ZaKa+tJ\n"
"Gfrwp3Rrk7X30LJh7eOCYjEKo2VG1R9JrB/ZwHS58sVFQO9/6aqDRYZkS7buVDF9\n"
"2NZRmz3WrFN3tTULjjZNaYjmGkgbgs0naEW9ScBgCkF0aUbgfo307nutMrcaDtCq\n"
"R0FqpcNgY8KzDpGJhml896swoD6HHF1V+r04YE1JYMy3J+x1MCVOwQgwLRj5mg==\n"
"-----END CERTIFICATE-----\n";

/* Certificate which is not trusted by the broker. */
static const char tlstestCLIENT_UNTRUSTED_CERTIFICATE_PEM[] = "-----BEGIN CERTIFICATE-----\n"
"MIIBaTCCAQ+gAwIBAgIBAjAKBggqhkjOPQQDAjAhMRMwEQYDVQQKEwpBbWF6b24u\n"
"Y29tMQowCAYDVQQDDAEqMB4XDTIwMDMwNTA2MDMyM1oXDTIwMDMwNjA2MDMyM1ow\n"
"ITETMBEGA1UEChMKQW1hem9uLmNvbTEKMAgGA1UEAwwBKjBZMBMGByqGSM49AgEG\n"
"CCqGSM49AwEHA0IABKa4WOhyKXSN7KHg39HTrP2Qbc4aJcUsKyS4DmzpTBHJQ0vJ\n"
"ZlP0gJDKX5G2uY8tdgqlhlKVTo5EGqCB4xK9pEyjODA2MA4GA1UdDwEB/wQEAwIC\n"
"pDATBgNVHSUEDDAKBggrBgEFBQcDATAPBgNVHRMBAf8EBTADAQH/MAoGCCqGSM49\n"
"BAMCA0gAMEUCID7MyooCjIEJuAKRfS3VOzH4gPenAJLWwRpFu9NPuQ9cAiEAkyvc\n"
"1B9YIwJH9CA3o0LZqXvS5cbpnP6XLz5zsb2zNe4=\n"
"-----END CERTIFICATE-----\n";

/* Private key corresponding to the untrusted certificate. */
static const char tlstestCLIENT_UNTRUSTED_PRIVATE_KEY_PEM[] = "-----BEGIN EC PRIVATE KEY-----\n"
"MHcCAQEEIPzbVubghk0w1a7ZKo3hr3oHgYMFJ0gynZD6f+2S9s8poAoGCCqGSM49\n"
"AwEHoUQDQgAEprhY6HIpdI3soeDf0dOs/ZBtzholxSwrJLgObOlMEclDS8lmU/SA\n"
"kMpfkba5jy12CqWGUpVOjkQaoIHjEr2kTA==\n"
"-----END EC PRIVATE KEY-----\n";

/* Device certificate created using BYOC instructions. */
static const char tlstestCLIENT_BYOC_CERTIFICATE_PEM[] = "-----BEGIN CERTIFICATE-----\n"
"MIIBajCCAQ+gAwIBAgIBAjAKBggqhkjOPQQDAjAhMRMwEQYDVQQKEwpBbWF6b24u\n"
"Y29tMQowCAYDVQQDDAEqMB4XDTIwMDMwNTA2MDMyM1oXDTIwMDMwNjA2MDMyM1ow\n"
"ITETMBEGA1UEChMKQW1hem9uLmNvbTEKMAgGA1UEAwwBKjBZMBMGByqGSM49AgEG\n"
"CCqGSM49AwEHA0IABB6ba1mSsqvaRqOcL7/qIukDraRliey7j111zC+ZIRUm4zjM\n"
"CEYNh8nLEVcOx42xnJ82KwKGobI/C3Vz1nJj7uejODA2MA4GA1UdDwEB/wQEAwIC\n"
"pDATBgNVHSUEDDAKBggrBgEFBQcDATAPBgNVHRMBAf8EBTADAQH/MAoGCCqGSM49\n"
"BAMCA0kAMEYCIQDPqEr9ea/KXfqfj2b0vmkE39JEuh1BBh0mno7/krs82AIhAMzm\n"
"7yISMFa7F98jRwCR1kVyA9kWAYdfFM2Gtqc69c/m\n"
"-----END CERTIFICATE-----\n";

/* Device private key created using BYOC instructions. */
static const char tlstestCLIENT_BYOC_PRIVATE_KEY_PEM[] = "-----BEGIN EC PRIVATE KEY-----\n"
"MHcCAQEEIFxjY8IJQof3AV9l1AxGUbw1U6yZmYVPDqUycLTXRjxVoAoGCCqGSM49\n"
"AwEHoUQDQgAEHptrWZKyq9pGo5wvv+oi6QOtpGWJ7LuPXXXML5khFSbjOMwIRg2H\n"
"ycsRVw7HjbGcnzYrAoahsj8LdXPWcmPu5w==\n"
"-----END EC PRIVATE KEY-----\n";

#endif /* ifndef _AWS_TLS_TEST_H_ */
