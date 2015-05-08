#include "gpio.h"

#define GPIOA_BASE 0x40020000
#define GPIOB_BASE 0x40020400
#define GPIOC_BASE 0x40020800
#define GPIOD_BASE 0x40020C00
#define GPIOE_BASE 0x40021000
#define GPIOF_BASE 0x40021400
#define GPIOG_BASE 0x40021800
#define GPIOH_BASE 0x40021C00
#define GPIOI_BASE 0x40022000
#define GPIOJ_BASE 0x40022400
#define GPIOK_BASE 0x40022800

#define GPIO_MODER_OFFSET   0x00
#define GPIO_OTYPER_OFFSET  0x04
#define GPIO_OSPEEDR_OFFSET 0x08
#define GPIO_PUPDR_OFFSET   0x0C
#define GPIO_IDR_OFFSET     0x10
#define GPIO_ODR_OFFSET     0x14
#define GPIO_BSRR_OFFSET    0x18
#define GPIO_LCKR_OFFSET    0x1C
#define GPIO_AFRL_OFFSET    0x20
#define GPIO_AFRH_OFFSET    0x24

char * GPIO_REGISTER_ADDRESS(GPIO_GROUP_t gpio_group, int registerOffset) {
  char * gpioBaseAddress[11] = {
    (char *)GPIOA_BASE, (char *)GPIOB_BASE, (char *)GPIOC_BASE,
    (char *)GPIOD_BASE, (char *)GPIOE_BASE, (char *)GPIOF_BASE,
    (char *)GPIOG_BASE, (char *)GPIOH_BASE, (char *)GPIOI_BASE,
    (char *)GPIOJ_BASE, (char *)GPIOK_BASE
  };
  return gpioBaseAddress[gpio_group] + registerOffset;
}

GPIO_MODER_t * GPIO_MODER(GPIO_GROUP_t gpio_group) {
  return (GPIO_MODER_t *)GPIO_REGISTER_ADDRESS(gpio_group, GPIO_MODER_OFFSET);
}

GPIO_OTYPER_t * GPIO_OTYPER(GPIO_GROUP_t gpio_group) {
  return (GPIO_OTYPER_t *)GPIO_REGISTER_ADDRESS(gpio_group, GPIO_OTYPER_OFFSET);
}

GPIO_OSPEEDR_t * GPIO_OSPEEDR(GPIO_GROUP_t gpio_group) {
  return (GPIO_OSPEEDR_t *)GPIO_REGISTER_ADDRESS(gpio_group, GPIO_OSPEEDR_OFFSET);
}

GPIO_PUPDR_t * GPIO_PUPDR(GPIO_GROUP_t gpio_group) {
  return (GPIO_PUPDR_t *)GPIO_REGISTER_ADDRESS(gpio_group, GPIO_PUPDR_OFFSET);
}

GPIO_IDR_t * GPIO_IDR(GPIO_GROUP_t gpio_group) {
  return (GPIO_IDR_t *)GPIO_REGISTER_ADDRESS(gpio_group, GPIO_IDR_OFFSET);
}

GPIO_ODR_t * GPIO_ODR(GPIO_GROUP_t gpio_group) {
  return (GPIO_ODR_t *)GPIO_REGISTER_ADDRESS(gpio_group, GPIO_ODR_OFFSET);
}

GPIO_BSRR_t * GPIO_BSRR(GPIO_GROUP_t gpio_group) {
  return (GPIO_BSRR_t *)GPIO_REGISTER_ADDRESS(gpio_group, GPIO_BSRR_OFFSET);
}

GPIO_LCKR_t * GPIO_LCKR(GPIO_GROUP_t gpio_group) {
  return (GPIO_LCKR_t *)GPIO_REGISTER_ADDRESS(gpio_group, GPIO_LCKR_OFFSET);
}

GPIO_AFRL_t * GPIO_AFRL(GPIO_GROUP_t gpio_group) {
  return (GPIO_AFRL_t *)GPIO_REGISTER_ADDRESS(gpio_group, GPIO_AFRL_OFFSET);
}

GPIO_AFRH_t * GPIO_AFRH(GPIO_GROUP_t gpio_group) {
  return (GPIO_AFRH_t *)GPIO_REGISTER_ADDRESS(gpio_group, GPIO_AFRH_OFFSET);
}
