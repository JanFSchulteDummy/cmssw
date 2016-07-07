#include "FWCore/PluginManager/interface/ModuleDef.h"
#include "FWCore/Framework/interface/MakerMacros.h"

#include "RecoTracker/MeasurementDet/plugins/MeasurementTrackerESProducer.h"
#include "RecoTracker/MeasurementDet/interface/SeedingOTEDProducer.h"


#include "FWCore/Framework/interface/ModuleFactory.h"
#include "FWCore/Framework/interface/ESProducer.h"

// Cluster Vertexing
#include "HIPixelClusterVtxAnalyzer.h"
DEFINE_FWK_MODULE(HIPixelClusterVtxAnalyzer);
DEFINE_FWK_EVENTSETUP_MODULE(MeasurementTrackerESProducer);
DEFINE_FWK_MODULE(SeedingOTEDProducer);
