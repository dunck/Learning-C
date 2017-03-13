.PHONY: clean All

All:
	@echo "----------Building project:[ DigitLexical - Debug ]----------"
	@cd "DigitLexical" && "$(MAKE)" -f  "DigitLexical.mk"
clean:
	@echo "----------Cleaning project:[ DigitLexical - Debug ]----------"
	@cd "DigitLexical" && "$(MAKE)" -f  "DigitLexical.mk" clean
