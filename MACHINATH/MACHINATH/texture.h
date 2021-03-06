
#ifndef TEXTURE_H_
#define TEXTURE_H_


#include <d3dx9.h>


/*------------------------------------------------------------------------------
   �e�N�X�`���񋓌^
------------------------------------------------------------------------------*/
// �e�N�X�`���Ǘ��ԍ�
typedef enum TextureIndex
{
	TEXTURE_INDEX_QTE_OUTER,
	TEXTURE_INDEX_QTE_INNER,
	TEXTURE_INDEX_FUCK,
	TEXTURE_INDEX_SCORE,
	TEXTURE_INDEX_QTE_AFTER,
	TEXTURE_INDEX_WATER,
	TEXTURE_INDEX_BLACK,
	TEXTURE_INDEX_TITLE_EYE,
	TEXTURE_INDEX_TITLE_FORWARD,
	TEXTURE_INDEX_TITLE_FORWARD2,
	TEXTURE_INDEX_EDGELEFT,
	TEXTURE_INDEX_EDGETOP,
	TEXTURE_INDEX_COUNT1,
	TEXTURE_INDEX_COUNT2,
	TEXTURE_INDEX_COUNT3,
	TEXTURE_INDEX_COUNTGO,
	TEXTURE_INDEX_COUNTGETREADY,
	TEXTURE_INDEX_TITLE_ANIME1,
	TEXTURE_INDEX_TITLE_ANIME2,
	TEXTURE_INDEX_TITLE_ANIME3,
	TEXTURE_INDEX_TITLE_SUNA1,
	TEXTURE_INDEX_TITLE_SUNA2,
	TEXTURE_INDEX_FIRST,
	TEXTURE_INDEX_SECOND,
	TEXTURE_INDEX_THIRD,
	TEXTURE_INDEX_DISSOLVE,

    TEXTURE_INDEX_MAX
};


/*------------------------------------------------------------------------------
   �֐��̃v���g�^�C�v�錾
------------------------------------------------------------------------------*/
// �e�N�X�`���̓ǂݍ���
//
// �߂�l:�ǂݍ��߂Ȃ�������
//
int Texture_Load(void);

// �e�N�X�`���̉��
void Texture_Release(void);

// �e�N�X�`���C���^�[�t�F�[�X�̎擾
//
// �߂�l:�e�N�X�`���C���^�[�t�F�[�X
//        ���������݂��Ȃ�index��w�肵���ꍇ�ANULL
LPDIRECT3DTEXTURE9 Texture_GetTexture(TextureIndex index);

// �e�N�X�`���𑜓x���̎擾
//
// ���� ... index �e�N�X�`���Ǘ��ԍ�
//
int Texture_GetWidth(TextureIndex index);

// �e�N�X�`���𑜓x�����̎擾
//
// ���� ... index �e�N�X�`���Ǘ��ԍ�
//
int Texture_GetHeight(TextureIndex index);


#endif // TEXTURE_H_
