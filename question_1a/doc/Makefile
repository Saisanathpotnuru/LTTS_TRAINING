# Document the code using Doxygen
PROJECT_DOXY_FILE = Complex_Calc_Doxyfile

doc: $(PROJECT_DOXY_FILE)
	doxygen $^

clean:
	del /q html\*
	del /q html\search\*
	rmdir html\search
	rmdir html
