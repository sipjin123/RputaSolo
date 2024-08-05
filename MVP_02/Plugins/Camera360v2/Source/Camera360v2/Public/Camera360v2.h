// Copyright 2023 ELIZAROV IVAN NIKOLAEVICH (IP) OGRN 320774600344955 | ElizzaRF.  All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FCamera360v2Module : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

};
