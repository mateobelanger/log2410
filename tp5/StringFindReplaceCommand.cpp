#include "StringFindReplaceCommand.h"
#include "AbsAudioFile.h"

void StringFindReplaceCommand::execute(AbsAudioFile & f)
{
	// Declencher l'execution de la commande
	f.accept(m_visitor);
}
