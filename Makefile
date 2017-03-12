.PHONY: clean All

All:
	@echo "----------Building project:[ DegreeToRadian - Debug ]----------"
	@cd "DegreeToRadian" && "$(MAKE)" -f  "DegreeToRadian.mk"
clean:
	@echo "----------Cleaning project:[ DegreeToRadian - Debug ]----------"
	@cd "DegreeToRadian" && "$(MAKE)" -f  "DegreeToRadian.mk" clean
