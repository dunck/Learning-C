.PHONY: clean All

All:
	@echo "----------Building project:[ 4-10-DecimalToBinary - Debug ]----------"
	@cd "4-10-DecimalToBinary" && "$(MAKE)" -f  "4-10-DecimalToBinary.mk"
clean:
	@echo "----------Cleaning project:[ 4-10-DecimalToBinary - Debug ]----------"
	@cd "4-10-DecimalToBinary" && "$(MAKE)" -f  "4-10-DecimalToBinary.mk" clean
