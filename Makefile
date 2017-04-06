.PHONY: clean All

All:
	@echo "----------Building project:[ 6-02-MorePointerTasks - Debug ]----------"
	@cd "6-02-MorePointerTasks" && "$(MAKE)" -f  "6-02-MorePointerTasks.mk"
clean:
	@echo "----------Cleaning project:[ 6-02-MorePointerTasks - Debug ]----------"
	@cd "6-02-MorePointerTasks" && "$(MAKE)" -f  "6-02-MorePointerTasks.mk" clean
