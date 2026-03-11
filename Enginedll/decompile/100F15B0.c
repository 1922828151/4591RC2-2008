/*
 * func-name: ?DrawImmediateTranslucent@StaticModel@@UAEXMPAVCamera@@PAVWorld@@_NHPAVActor@@@Z
 * func-address: 0x100f15b0
 * callers: none
 * callees: 0x10063830, 0x1007ec70, 0x100f04f0
 */

void __thiscall StaticModel::DrawImmediateTranslucent(
        struct ModelFrame ***this,
        float a2,
        struct Camera *a3,
        struct World *a4,
        bool a5,
        unsigned int a6,
        struct Actor *a7)
{
  if ( Camera::BoxInFrustum(a3, (const struct BBox *)(this + 3), 0.0, 0)
    && (!*((_BYTE *)this + 139) || *((_BYTE *)Editor::Instance() + 2075)) )
  {
    StaticModel::DrawImmediateTranslucent((StaticModel *)this, a2, a3, this[77], a4, a5, a6, (int)a7);
  }
}
