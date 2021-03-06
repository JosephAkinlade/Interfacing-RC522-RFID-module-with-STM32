#ifndef SPI_H
#define SPI_H

extern void SPI1_Init(void);
extern void SPI1_TransmitByte(uint8_t byte);
extern void SPI1_TransmitBytes(uint8_t* data, uint8_t len);
extern void SPI1_ReceiveBytes(uint8_t* data, uint32_t len);

#endif /* SPI_H */
