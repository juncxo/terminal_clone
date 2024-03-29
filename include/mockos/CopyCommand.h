#pragma once
#include "SimpleFileSystem.h"
#include "AbstractCommand.h"
#include <string>


/*
 * Enumeration for CopyCommand class
 */
enum CopyErrors {
    CopySuccess, InvalidFileExtension, failedToAddCopy, fileNonExist
};
class CopyCommand : public AbstractCommand {
public:
    CopyCommand(AbstractFileSystem*);
    virtual int execute(std::string) override;
    virtual void displayInfo() override;
private:
    AbstractFileSystem* afs;
};