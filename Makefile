.PHONY: clean All

All:
	@echo "----------Building project:[ GradeAverageCalculator - Debug ]----------"
	@cd "GradeAverageCalculator" && "$(MAKE)" -f  "GradeAverageCalculator.mk"
clean:
	@echo "----------Cleaning project:[ GradeAverageCalculator - Debug ]----------"
	@cd "GradeAverageCalculator" && "$(MAKE)" -f  "GradeAverageCalculator.mk" clean
