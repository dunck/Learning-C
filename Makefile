.PHONY: clean All

All:
	@echo "----------Building project:[ 5-04-ArrayDictionary - Debug ]----------"
	@cd "5-04-ArrayDictionary" && "$(MAKE)" -f  "5-04-ArrayDictionary.mk"
clean:
	@echo "----------Cleaning project:[ 5-04-ArrayDictionary - Debug ]----------"
	@cd "5-04-ArrayDictionary" && "$(MAKE)" -f  "5-04-ArrayDictionary.mk" clean
