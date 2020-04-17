ACLOCAL_AMFLAGS = -I m4

SUBDIRS = \
	libsrc \
	tests

EXTRA_DIST = \
	README.md \
	CHANGES.md \
	CODE_OF_CONDUCT.md \
	CONTRIBUTING.md \
	DISCLAIMER.md \
	LICENSE.md \
	code.json \
	developer/autopep8.cfg \
	developer/uncrustify.cfg \
	docker/debian-stable-gcc8 \
	docker/geomodelgrids-testenv


coverage-libsrc:
		lcov --directory $(top_builddir)/libsrc --capture --output-file coverage.info
		lcov --remove coverage.info '/usr/*' '/Library/*' -o coverage.info
		lcov --list coverage.info

clean-coverage:
		$(RM) $(RM_FLAGS) `find . -name "*.gcda"` coverage.info



# End of file
