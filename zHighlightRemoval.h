#ifndef __Z_HIGHLIGHT_REMOVAL_H__
#define __Z_HIGHLIGHT_REMOVAL_H__


#include "zGlobal.h"

class zHighlightRemoval 
{
  
 protected:
  int zRemoveHighlights(zArray2D<s_rgbi> &img, zArray2D<s_rgbi> &diff);
  int zSpecularFreeImage(zArray2D<s_rgbi> &img, zArray2D<s_rgbi> &diff);

  int zResetLabels(zArray2D<s_rgbi> &src);
  int zSpecular2Diffuse(s_rgbi &iro, float maxChroma);
  int zInit(zArray2D<s_rgbi> &src, zArray2D<s_rgbi> &sfi, float epsilon);
  int zIteration(zArray2D<s_rgbi> &src,zArray2D<s_rgbi> &sfi, float epsilon);
  
 public:
  zHighlightRemoval(char *fname);
  virtual ~zHighlightRemoval();
  
};

#endif 
