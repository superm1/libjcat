/*
 * Copyright (C) 2017-2020 Richard Hughes <richard@hughsie.com>
 *
 * SPDX-License-Identifier: LGPL-2.1+
 */

#pragma once

#include <glib-object.h>

#define JCAT_TYPE_RESULT (jcat_result_get_type ())

G_DECLARE_FINAL_TYPE (JcatResult, jcat_result, JCAT, RESULT, GObject)

gint64		 jcat_result_get_timestamp	(JcatResult	*self);
const gchar	*jcat_result_get_authority	(JcatResult	*self);