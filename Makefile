.PHONY: clean All

All:
	@echo "----------Building project:[ TriSort - Debug ]----------"
	@cd "TriSort" && "$(MAKE)" -f  "TriSort.mk"
clean:
	@echo "----------Cleaning project:[ TriSort - Debug ]----------"
	@cd "TriSort" && "$(MAKE)" -f  "TriSort.mk" clean
