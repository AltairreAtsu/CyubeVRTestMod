#include "Furnace.h"

AFurnace::AFurnace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Initialized = false;
}

bool AFurnace::UseActorCustomLocation() {
    return false;
}

void AFurnace::SetFurnaceSaveVariables_Implementation(float HeatOnTop, float MoltenFillValue, float MeltAmountSum, int32 ItemFullyFinishedMelt, bool FlowOutStarted, FRotator RotationShutterTop, FRotator RotationShutterBottom, FRotator RotationLever) {
}

void AFurnace::GetFurnaceSaveVariables_Implementation(float& HeatOnTop, float& MoltenFillValue, float& MeltAmountSum, int32& ItemFullyFinishedMelt, bool& FlowOutStarted, FRotator& RotationShutterTop, FRotator& RotationShutterBottom, FRotator& RotationLever) {
}

FVector AFurnace::GetActorCustomLocation() {
    return FVector{};
}

void AFurnace::CanDamageObjectBP_Implementation(bool& CanDamage) {
}


