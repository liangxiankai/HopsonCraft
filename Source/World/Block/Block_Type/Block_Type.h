#ifndef BLOCK_TYPE_H
#define BLOCK_TYPE_H

//Base class for the single-instance blocks

#include <string>

#include "../Block_Data.h"

struct Floor_Item {};

namespace Block
{
    class Block_Type
    {
        public:

        public:
            virtual ~Block_Type() = default;

            const Block_Data& getData() const;

            virtual void        getUpdatableBlock   ();

        protected:
            Block_Type(const std::string& name);

        private:
            Block_Data m_data;
    };
}

#endif // BLOCK_TYPE_H