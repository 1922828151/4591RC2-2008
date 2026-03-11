/*
 * func-name: ??1SkinWeights@Mesh@@QAE@XZ
 * func-address: 0x1000c8b0
 * callers: 0x100eaad0, 0x100edc30, 0x1011f990
 * callees: 0x101a2500
 */

void __thiscall Mesh::SkinWeights::~SkinWeights(void **this)
{
  if ( this[12] )
    operator delete(this[12]);
  this[12] = 0;
  this[13] = 0;
  this[14] = 0;
  if ( this[8] )
    operator delete(this[8]);
  this[8] = 0;
  this[9] = 0;
  this[10] = 0;
  std::string::~string(this);
}
