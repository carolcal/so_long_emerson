
#include "so_long.h"

void	ft_start_mlx(t_game *game)
{
	t_mlx	*mlx;

	mlx = get_mlx();
	mlx->mlx_ptr = NULL;
	mlx_set_setting(MLX_STRETCH_IMAGE, true);
	mlx->mlx_ptr = mlx_init(WIDTH * game->map.x_len,
			HEIGHT * game->map.y_len, "so_long", true);
	if (!mlx->mlx_ptr)
		handle_error(E_MLX_ERROR);
	start_images(mlx->mlx_ptr);
	mlx_key_hook(mlx->mlx_ptr, &key_hook, &(get_game()->img));
}
