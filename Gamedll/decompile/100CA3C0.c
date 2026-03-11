/*
 * func-name: sub_100CA3C0
 * func-address: 0x100ca3c0
 * callers: 0x10009449
 * callees: 0x102c9d50
 */

Model *__thiscall sub_100CA3C0(Model *this, char a2)
{
  Model::~Model(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
