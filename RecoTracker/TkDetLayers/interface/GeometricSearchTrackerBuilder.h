#ifndef TkDetLayers_GeometricSearchTrackerBuilder_h
#define TkDetLayers_GeometricSearchTrackerBuilder_h

#include "RecoTracker/TkDetLayers/interface/GeometricSearchTracker.h"
#include "Geometry/TrackerNumberingBuilder/interface/GeometricDet.h"
#include "Geometry/TrackerGeometryBuilder/interface/TrackerGeometry.h"

class TrackerTopology;

/** GeometricSearchTrackerBuilder implementation
 *  
 */

class GeometricSearchTrackerBuilder {
public:
  GeometricSearchTrackerBuilder() {}
  ~GeometricSearchTrackerBuilder() {}

  GeometricSearchTracker* build(const GeometricDet* theGeometricTracker,
<<<<<<< HEAD
                                const TrackerGeometry* theGeomDetGeometry,
                                const TrackerTopology* tTopo) __attribute__((cold));
=======
				const TrackerGeometry* theGeomDetGeometry,
				const TrackerTopology* tTopo,
				const bool usePhase2Stacks = false) __attribute__ ((cold));
>>>>>>> use stacks set in cfg file
};

#endif
