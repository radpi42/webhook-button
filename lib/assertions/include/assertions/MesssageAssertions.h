//
// Created by Artur Krysiak on 2019-06-26.
//

#ifndef WEBHOOK_BUTTON_MESSSAGEASSERTIONS_H
#define WEBHOOK_BUTTON_MESSSAGEASSERTIONS_H

#include <etl/message.h>
#include <etl/list.h>

namespace assertions {

    class MessageAssertions {
    private:
        etl::ilist<const etl::imessage *> *messages;
    public:
        explicit MessageAssertions(etl::ilist<const etl::imessage*> *);

        MessageAssertions& receivedNoMessages();
    };

}

#endif //WEBHOOK_BUTTON_MESSSAGEASSERTIONS_H
