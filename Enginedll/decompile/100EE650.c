/*
 * func-name: ?SetNodeInfluence@StaticModel@@QAEXPAXAAVMatrix@@M@Z
 * func-address: 0x100ee650
 * callers: none
 * callees: none
 */

void __thiscall StaticModel::SetNodeInfluence(StaticModel *this, char *a2, struct Matrix *a3, float a4)
{
  if ( a2 )
    qmemcpy(a2 + 292, a3, 0x40u);
}
