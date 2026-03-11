/*
 * func-name: ??0SubareaMaterialSerializer@@QAE@ABV0@@Z
 * func-address: 0x1003e7e0
 * callers: none
 * callees: 0x10001800
 */

SubareaMaterialSerializer *__thiscall SubareaMaterialSerializer::SubareaMaterialSerializer(
        SubareaMaterialSerializer *this,
        const struct SubareaMaterialSerializer *a2)
{
  XMLSystem::XMLSystem(this, a2);
  *((_DWORD *)this + 23) = *((_DWORD *)a2 + 23);
  return this;
}
