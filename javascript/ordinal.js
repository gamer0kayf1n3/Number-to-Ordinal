function ordinal() {
	var number = prompt("Ordinal of?");
	var number_str = String(number);
	var digits = number_str.split('');
	var suffix;
	if (digits.length == 1) {
		if (digits[digits.length - 1] == "1") {
			suffix = "st";
		} else if (digits[digits.length - 1] == "2") {
			suffix = "nd";
		} else if (digits[digits.length - 1] == "3") {
			suffix = "rd";
		} else {
			suffix = "th";
		}

	} else if (digits[digits.length - 2] == "1") {
		suffix = "th";
	} else {
		if (digits[digits.length - 1] == "1") {
			suffix = "st";
		} else if (digits[digits.length - 1] == "2") {
			suffix = "nd";
		} else if (digits[digits.length - 1] == "3") {
			suffix = "rd";
		} else {
			suffix = "th";
		}

	}

	alert(number_str + suffix);
}
