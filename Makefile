.PHONY: clean All

All:
	@echo "----------Building project:[ 3-11-PiTolerance - Debug ]----------"
	@cd "3-11-PiTolerance" && "$(MAKE)" -f  "3-11-PiTolerance.mk"
clean:
	@echo "----------Cleaning project:[ 3-11-PiTolerance - Debug ]----------"
	@cd "3-11-PiTolerance" && "$(MAKE)" -f  "3-11-PiTolerance.mk" clean
