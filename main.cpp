#include <aml/amlmod.h>
#include <aml/logger.h>

MYMOD(net.yourname.myfirstmod, My First AML Mod, 1.0, YourName)

BEGIN_DECLS
void OnModLoad()
{
    logger->Info("==================================");
    logger->Info("Hello! My first AML Mod is working!");
    logger->Info("==================================");
}
END_DECLS
