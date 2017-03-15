.PHONY: clean All

All:
	@echo "----------Building project:[ FindLargest - Debug ]----------"
	@cd "FindLargest" && "$(MAKE)" -f  "FindLargest.mk"
clean:
	@echo "----------Cleaning project:[ FindLargest - Debug ]----------"
	@cd "FindLargest" && "$(MAKE)" -f  "FindLargest.mk" clean
