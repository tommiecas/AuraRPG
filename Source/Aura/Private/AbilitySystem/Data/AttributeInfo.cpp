// Copyright Crapiello Entertainment


#include "AbilitySystem/Data/AttributeInfo.h"

FAuraAttributeInfo UAttributeInfo::FindAttributeInfoForTag(const FGameplayTag& AttributeTag, bool blogNotFound) const
{
	for (const  FAuraAttributeInfo& Info : AttributeInformation)
	{
		if(Info.AttributeTag.MatchesTagExact(AttributeTag))
		{
			return Info;
		}
	}

	if (blogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Can't Find Info for AttributeTag [%s] on AttributeInfo [%s]."), *AttributeTag.ToString(), *GetNameSafe(this));
	}

	return FAuraAttributeInfo();
}
