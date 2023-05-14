#include "../src/lib.h"
#include <check.h>

START_TEST(test_get_nick) {
	char* input_data = "bururiiich";
	char* expected_values = "burur111ch";
	char* actual_value = get_nick(input_data);
	ck_assert_str_eq(expected_values, actual_value);
}
END_TEST

int main(void) {
	Suite *s = suite_create("Programing");
	TCase *tc_core = tcase_create("Lab09");

	tcase_add_test(tc_core, test_get_nick);
	suite_add_tcase(s, tc_core);

	SRunner *sr = srunner_create(s);
	srunner_run_all(sr, CK_VERBOSE);
	int number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);

	return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
