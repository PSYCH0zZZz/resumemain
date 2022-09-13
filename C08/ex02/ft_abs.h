#ifndef FT_ABS_H
# define FT_ABS_H
# include <unistd.h>

# define ABS(VALUE) (-1) * (VALUE < 0) * VALUE + (VALUE > 0) * VALUE 

#endif
