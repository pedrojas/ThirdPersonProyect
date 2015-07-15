#include "ThirdPersonProyect.h"
#include "ThirdPersonProyectGameMode.h"
#include "ThirdPersonProyectCharacter.h"

AThirdPersonProyectGameMode::AThirdPersonProyectGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
