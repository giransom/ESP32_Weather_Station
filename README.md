# ESP32_Weather_Station
This project functions by retrieving and displaying current weather conditions of a desired location. In the completion of this project, the ESP 32 Arduino is connected to the wifi and then utilizes an API from an open source weather website. Through retrieval of data through API json formatting then deserialization for c++ processing. In the future there will be an addition of a local wind speed detector.

# Code
- [Complete Weather Station Code](Weather_Station_Serial_Print.ino)
- [Connect ESP32 to Wifi](Connecting_ESP32_WiFi.ino)
- [Test code for Anemometer Sensor](Anemometer_Test_Code.ino)

# Materials Required

| **Part** | **Note** | **Price** | **Link** |
|:--:|:--:|:--:|:--:|
| Arduino ESP32 Nano | Has wifi connection abilities | $20 | <a href="http://amazon.com/Arduino-ABX00083-Bluetooth-MicroPython-Compatible/dp/B0C947BHK5/ref=sr_1_1?dib=eyJ2IjoiMSJ9.89rZbVYBSTMMiBZolsKdQ1JbLZ1axNOIl2hS6CJIWo0HL9RaP36mau8YJR7d4YL-dlqwa81J4FhRJGA28BKIB11EF6qTl7wo1wkMgqMpA2YjhM3rXbzYxRAz7EG0ldwpZXoAbk6oVmmD9DqDqra15LhN9qqqIglWO8yc1T9HLsDDLn7i7bSHjYbLL0fXdhfr28U3MVjZcV6aFricknSbAtqOthcPUn596rjjXyABeZI._3HWddX8HbWsFMxE_vGfBpsw76mZLOdoIYzCDg59Osc&dib_tag=se&keywords=arduino+esp21&qid=1779543906&sr=8-1"> Link </a> |
| Anemometer | Utilized for measuring wind speed and direction | $9.99 | <a href="https://a.co/d/05CouZ9B"> Link </a> |
| Micro USB Port | Connects the Arduino board to the computer | $5.49 | <a href="https://www.amazon.com/dp/B098DW7485?ref=nb_sb_ss_w_as-reorder_k0_1_8&amp=&crid=1YRBOW66YBW2H&sprefix=microusb&th=1"> Link </a> |
| SSD1306 | Utilizd as a display module to display data collected | $9.99 | <a href="https://www.amazon.com/ELEGOO-Display-Compact-Self-Luminous-Projects/dp/B0D2RMQQHR/ref=sr_1_7?crid=137DLVSPFPI1L&dib=eyJ2IjoiMSJ9.GZzyj9YeMmqRwkrAxnJLvxeKtuRBK9wCAY91CtLSIYvyPiaGjuAQrShbLS7cyWSaPSLcu_V7of58YOJQ5Jivm-0EqQQYMX8BooRXsL5Pqbd2GG4MDuxjhdM6BxUwOVBOCBeYK6ffk1265d1TYkI6uUqmxbg202td6x638gqBJE9Ucf3wzCAtQ7EluONfZtTNpeH3-L08xz1G0Se8IHBYNVFv6MVBTXbLxAFOz_gDWKg.BK5apWCHeU56U31GoSU0wowVvfKGAXhc8iH-tgDN9XM&dib_tag=se&keywords=SSD1306&qid=1750515730&sprefix=ssd1306%2Caps%2C115&sr=8-7"> Link </a> |
| Electronic Kit | Includes wires,resistors, etc. | $13.49 | <a href="https://www.amazon.com/Smraza-Electronics-Potentiometer-tie-Points-Breadboard/dp/B0B62RL725/ref=sxts_b2b_sx_reorder_acb_business?content-id=amzn1.sym.f63a3b0b-3a29-4a8e-8430-073528fe007f%3Aamzn1.sym.f63a3b0b-3a29-4a8e-8430-073528fe007f&crid=2IC3T44H3U3WG&cv_ct_cx=breadboard%2Bkit&dib=eyJ2IjoiMSJ9.TUd5tu2T8rmms7ZuJ0UzmbtpLL1zsu93bQM0PzwnP4E.sT0V0vL_QtbYv8ymVTCcRkhFNgBtRvRiT7G4FT1oGTE&dib_tag=se&keywords=breadboard%2Bkit&pd_rd_i=B0B62RL725&pd_rd_r=67e1f4ff-e3b9-44e4-b441-b4ae282f036b&pd_rd_w=UjFaP&pd_rd_wg=0xRoC&pf_rd_p=f63a3b0b-3a29-4a8e-8430-073528fe007f&pf_rd_r=BFGP77H27ZN31W4PZAW6&qid=1715911733&sbo=RZvfv%2F%2FHxDF%2BO5021pAnSA%3D%3D&sprefix=breadboard%2Bkit%2Caps%2C109&sr=1-2-9f062ed5-8905-4cb9-ad7c-6ce62808241a&th=1"> Link </a> |
| Digital Multi Meter | Utilized for debugging and circuit analysis | $9.99 | <a href="http://amazon.com/gp/product/B0CXM242J1/ref=sw_img_1?smid=A34MWHFZRUFCUF&psc=1"> Link </a> |

# Sources
- [Example 1](https://definitelynotdevan.github.io/DevanG_BSE_Portfolio/)
- [Example 2](https://audreylourdes.github.io/Audrey_Portfolio/)
- [Connecting Board to Wifi](https://www.electronicwings.com/esp32/esp32-wi-fi-basics-getting-started)
- [Weather API's](https://openweathermap.org/api)
- [Weather API Commands](https://openweathermap.org/api/one-call-4?collection=one_call_api#daily)
- [Desterialization](https://youtu.be/nfr6wddRRxo?si=CLtQLEQ1F7nRpNns)
- [Arduino Json Helper](https://arduinojson.org/)
