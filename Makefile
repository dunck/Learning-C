.PHONY: clean All

All:
	@echo "----------Building project:[ 4-7-ComputerGuessNumber - Debug ]----------"
	@cd "4-7-ComputerGuessNumber" && "$(MAKE)" -f  "4-7-ComputerGuessNumber.mk"
clean:
	@echo "----------Cleaning project:[ 4-7-ComputerGuessNumber - Debug ]----------"
	@cd "4-7-ComputerGuessNumber" && "$(MAKE)" -f  "4-7-ComputerGuessNumber.mk" clean
