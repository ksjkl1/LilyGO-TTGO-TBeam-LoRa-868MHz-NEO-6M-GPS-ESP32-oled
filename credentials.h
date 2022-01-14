/*

Credentials file

*/

#pragma once

// Only one of these settings must be defined
#define USE_ABP
//#define USE_OTAA

#ifdef USE_ABP

    // LoRaWAN NwkSKey, network session key
    static const u1_t PROGMEM NWKSKEY[16] = { 0xE7, 0xDA, 0xCF, 0x71, 0x30, 0x02, 0x64, 0xE9, 0xB6, 0xC6, 0xA5, 0xBC, 0x28, 0xB8, 0x7B, 0xBF };  
    
    // LoRaWAN AppSKey, application session key
    static const u1_t PROGMEM APPSKEY[16] = { 0x3A, 0x5F, 0xE9, 0xFF, 0x0D, 0xDB, 0x83, 0x34, 0x54, 0x3D, 0x74, 0x7A, 0x0C, 0xDA, 0x17, 0xCE };  
    
    // LoRaWAN end-device address (DevAddr)
    static const u4_t DEVADDR = 0x260B90B5;  

#endif

#ifdef USE_OTAA

    // This EUI must be in little-endian format, so least-significant-byte
    // first. When copying an EUI from ttnctl output, this means to reverse
    // the bytes. For TTN issued EUIs the last bytes should be 0x00, 0x00,
    // 0x00.  
    static const u1_t PROGMEM APPEUI[8]  = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    // This should also be in little endian format, see above.
    // Note: You do not need to set this field, if unset it will be generated automatically based on the device macaddr}
    // FFFE5C41661C5210
    static u1_t DEVEUI[8]  = { 0x70, 0xB3, 0xD5, 0x7E, 0xD0, 0x04, 0x32, 0x52 };

    // This key should be in big endian format (or, since it is not really a
    // number but a block of memory, endianness does not really apply). In
    // practice, a key taken from ttnctl can be copied as-is.
    // The key shown here is the semtech default key.
    static const u1_t PROGMEM APPKEY[16] = { 0x42, 0xA1, 0x74, 0xBB, 0x00, 0xFE, 0x00, 0x1F, 0xEA, 0x99, 0x49, 0x0A, 0xEF, 0x64, 0xC4, 0xA3 }; 

    
#endif
