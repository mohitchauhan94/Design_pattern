#ifndef HP_BUILDER_H
#define HP_BUILDER_H

#include "Desktop_Builder.h"

class HP_Builder : public Desktop_Builder
{
    public:
        void build_monitor() override;
        void build_keyboard()  override;
        void build_mouse()  override;
        void build_processor()  override;
};

#endif