       dateTodayTemp = dateToday.clone();
        for (; !dateTodayTemp.eq(dateAdvanced); dateTodayTemp.inc()) {
            if (!unitedStatesCalendar.isHoliday(dateTodayTemp)) {
                businessDaysInBetweenUsingIsHolDay.add(dateTodayTemp);
            }
        }
