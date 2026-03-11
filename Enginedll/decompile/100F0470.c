/*
 * func-name: ?Draw@StaticModel@@UAEXPAVCamera@@PAVWorld@@_NHPAVActor@@2@Z
 * func-address: 0x100f0470
 * callers: none
 * callees: 0x10063830, 0x1007ec70, 0x100efe90
 */

void __thiscall StaticModel::Draw(
        struct ModelFrame ***this,
        struct Camera *a2,
        struct World *a3,
        bool a4,
        int a5,
        struct Actor *a6,
        bool a7)
{
  if ( !a7
    || Camera::BoxInFrustum(a2, (const struct BBox *)(this + 3), 0.0, 0)
    && (!*((_BYTE *)this + 139) || *((_BYTE *)Editor::Instance() + 2075)) )
  {
    StaticModel::Draw((StaticModel *)this, a2, this[77], a3, a4, a5, a6, a7);
    *((_BYTE *)this + 136) = 1;
  }
  else
  {
    *((_BYTE *)this + 136) = 0;
  }
}
