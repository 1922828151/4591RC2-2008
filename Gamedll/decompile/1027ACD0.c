/*
 * func-name: ?GetWorldBBox@CRadarMapUI@@QAEABVBBox@@XZ_0
 * func-address: 0x1027acd0
 * callers: 0x1000b609
 * callees: none
 */

const struct BBox *__thiscall CRadarMapUI::GetWorldBBox(CRadarMapUI *this)
{
  const struct BBox *result; // eax

  result = (CRadarMapUI *)((char *)this + 4004);
  if ( !*((_BYTE *)this + 4090) )
    return (CRadarMapUI *)((char *)this + 3920);
  return result;
}
