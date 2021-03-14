/**
 * @copyright
 * @file main.c
 * @author Andrea Gianarda
 * @date 17th of February 2021
 * @brief Main function
 */

#include "config/config.h"

void gpio_blink() {

	// GPIOA configuratin


}

int main(int argc, char * argv[]) {

	clk_config();

	gpio_blink();

	return 0;

}
