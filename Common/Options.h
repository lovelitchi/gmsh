#ifndef _OPTIONS_H_
#define _OPTIONS_H_

// Copyright (C) 1997-2005 C. Geuzaine, J.-F. Remacle
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
// USA.
// 
// Please report all bugs and problems to <gmsh@geuz.org>.

#define GMSH_SET       (1<<0)
#define GMSH_GET       (1<<1)
#define GMSH_GUI       (1<<2)

#define GMSH_SESSIONRC (1<<0)
#define GMSH_OPTIONSRC (1<<1)
#define GMSH_FULLRC    (1<<2)

// action is a combination of GMSH_SET, GMSH_GET, GMSH_GUI

#define OPT_ARGS_STR   int num, int action, char *val
#define OPT_ARGS_NUM   int num, int action, double val
#define OPT_ARGS_COL   int num, int action, unsigned int val

// STRINGS

char * opt_general_axes_label0(OPT_ARGS_STR);
char * opt_general_axes_label1(OPT_ARGS_STR);
char * opt_general_axes_label2(OPT_ARGS_STR);
char * opt_general_axes_format0(OPT_ARGS_STR);
char * opt_general_axes_format1(OPT_ARGS_STR);
char * opt_general_axes_format2(OPT_ARGS_STR);
char * opt_general_display(OPT_ARGS_STR);
char * opt_general_default_filename(OPT_ARGS_STR);
char * opt_general_tmp_filename(OPT_ARGS_STR);
char * opt_general_error_filename(OPT_ARGS_STR);
char * opt_general_session_filename(OPT_ARGS_STR);
char * opt_general_options_filename(OPT_ARGS_STR);
char * opt_general_editor(OPT_ARGS_STR);
char * opt_general_web_browser(OPT_ARGS_STR);
char * opt_general_scheme(OPT_ARGS_STR);
char * opt_general_graphics_font(OPT_ARGS_STR);
char * opt_mesh_triangle_options(OPT_ARGS_STR);
char * opt_solver_socket_name(OPT_ARGS_STR);
char * opt_solver_name(OPT_ARGS_STR);
char * opt_solver_name0(OPT_ARGS_STR);
char * opt_solver_name1(OPT_ARGS_STR);
char * opt_solver_name2(OPT_ARGS_STR);
char * opt_solver_name3(OPT_ARGS_STR);
char * opt_solver_name4(OPT_ARGS_STR);
char * opt_solver_executable(OPT_ARGS_STR);
char * opt_solver_executable0(OPT_ARGS_STR);
char * opt_solver_executable1(OPT_ARGS_STR);
char * opt_solver_executable2(OPT_ARGS_STR);
char * opt_solver_executable3(OPT_ARGS_STR);
char * opt_solver_executable4(OPT_ARGS_STR);
char * opt_solver_help(OPT_ARGS_STR);
char * opt_solver_help0(OPT_ARGS_STR);
char * opt_solver_help1(OPT_ARGS_STR);
char * opt_solver_help2(OPT_ARGS_STR);
char * opt_solver_help3(OPT_ARGS_STR);
char * opt_solver_help4(OPT_ARGS_STR);
char * opt_solver_extension(OPT_ARGS_STR);
char * opt_solver_extension0(OPT_ARGS_STR);
char * opt_solver_extension1(OPT_ARGS_STR);
char * opt_solver_extension2(OPT_ARGS_STR);
char * opt_solver_extension3(OPT_ARGS_STR);
char * opt_solver_extension4(OPT_ARGS_STR);
char * opt_solver_mesh_name(OPT_ARGS_STR);
char * opt_solver_mesh_name0(OPT_ARGS_STR);
char * opt_solver_mesh_name1(OPT_ARGS_STR);
char * opt_solver_mesh_name2(OPT_ARGS_STR);
char * opt_solver_mesh_name3(OPT_ARGS_STR);
char * opt_solver_mesh_name4(OPT_ARGS_STR);
char * opt_solver_mesh_command(OPT_ARGS_STR);
char * opt_solver_mesh_command0(OPT_ARGS_STR);
char * opt_solver_mesh_command1(OPT_ARGS_STR);
char * opt_solver_mesh_command2(OPT_ARGS_STR);
char * opt_solver_mesh_command3(OPT_ARGS_STR);
char * opt_solver_mesh_command4(OPT_ARGS_STR);
char * opt_solver_socket_command(OPT_ARGS_STR);
char * opt_solver_socket_command0(OPT_ARGS_STR);
char * opt_solver_socket_command1(OPT_ARGS_STR);
char * opt_solver_socket_command2(OPT_ARGS_STR);
char * opt_solver_socket_command3(OPT_ARGS_STR);
char * opt_solver_socket_command4(OPT_ARGS_STR);
char * opt_solver_name_command(OPT_ARGS_STR);
char * opt_solver_name_command0(OPT_ARGS_STR);
char * opt_solver_name_command1(OPT_ARGS_STR);
char * opt_solver_name_command2(OPT_ARGS_STR);
char * opt_solver_name_command3(OPT_ARGS_STR);
char * opt_solver_name_command4(OPT_ARGS_STR);
char * opt_solver_option_command(OPT_ARGS_STR);
char * opt_solver_option_command0(OPT_ARGS_STR);
char * opt_solver_option_command1(OPT_ARGS_STR);
char * opt_solver_option_command2(OPT_ARGS_STR);
char * opt_solver_option_command3(OPT_ARGS_STR);
char * opt_solver_option_command4(OPT_ARGS_STR);
char * opt_solver_first_option(OPT_ARGS_STR);
char * opt_solver_first_option0(OPT_ARGS_STR);
char * opt_solver_first_option1(OPT_ARGS_STR);
char * opt_solver_first_option2(OPT_ARGS_STR);
char * opt_solver_first_option3(OPT_ARGS_STR);
char * opt_solver_first_option4(OPT_ARGS_STR);
char * opt_solver_second_option(OPT_ARGS_STR);
char * opt_solver_second_option0(OPT_ARGS_STR);
char * opt_solver_second_option1(OPT_ARGS_STR);
char * opt_solver_second_option2(OPT_ARGS_STR);
char * opt_solver_second_option3(OPT_ARGS_STR);
char * opt_solver_second_option4(OPT_ARGS_STR);
char * opt_solver_third_option(OPT_ARGS_STR);
char * opt_solver_third_option0(OPT_ARGS_STR);
char * opt_solver_third_option1(OPT_ARGS_STR);
char * opt_solver_third_option2(OPT_ARGS_STR);
char * opt_solver_third_option3(OPT_ARGS_STR);
char * opt_solver_third_option4(OPT_ARGS_STR);
char * opt_solver_fourth_option(OPT_ARGS_STR);
char * opt_solver_fourth_option0(OPT_ARGS_STR);
char * opt_solver_fourth_option1(OPT_ARGS_STR);
char * opt_solver_fourth_option2(OPT_ARGS_STR);
char * opt_solver_fourth_option3(OPT_ARGS_STR);
char * opt_solver_fourth_option4(OPT_ARGS_STR);
char * opt_solver_fifth_option(OPT_ARGS_STR);
char * opt_solver_fifth_option0(OPT_ARGS_STR);
char * opt_solver_fifth_option1(OPT_ARGS_STR);
char * opt_solver_fifth_option2(OPT_ARGS_STR);
char * opt_solver_fifth_option3(OPT_ARGS_STR);
char * opt_solver_fifth_option4(OPT_ARGS_STR);
char * opt_solver_first_button(OPT_ARGS_STR);
char * opt_solver_first_button0(OPT_ARGS_STR);
char * opt_solver_first_button1(OPT_ARGS_STR);
char * opt_solver_first_button2(OPT_ARGS_STR);
char * opt_solver_first_button3(OPT_ARGS_STR);
char * opt_solver_first_button4(OPT_ARGS_STR);
char * opt_solver_first_button_command(OPT_ARGS_STR);
char * opt_solver_first_button_command0(OPT_ARGS_STR);
char * opt_solver_first_button_command1(OPT_ARGS_STR);
char * opt_solver_first_button_command2(OPT_ARGS_STR);
char * opt_solver_first_button_command3(OPT_ARGS_STR);
char * opt_solver_first_button_command4(OPT_ARGS_STR);
char * opt_solver_second_button(OPT_ARGS_STR);
char * opt_solver_second_button0(OPT_ARGS_STR);
char * opt_solver_second_button1(OPT_ARGS_STR);
char * opt_solver_second_button2(OPT_ARGS_STR);
char * opt_solver_second_button3(OPT_ARGS_STR);
char * opt_solver_second_button4(OPT_ARGS_STR);
char * opt_solver_second_button_command(OPT_ARGS_STR);
char * opt_solver_second_button_command0(OPT_ARGS_STR);
char * opt_solver_second_button_command1(OPT_ARGS_STR);
char * opt_solver_second_button_command2(OPT_ARGS_STR);
char * opt_solver_second_button_command3(OPT_ARGS_STR);
char * opt_solver_second_button_command4(OPT_ARGS_STR);
char * opt_solver_third_button(OPT_ARGS_STR);
char * opt_solver_third_button0(OPT_ARGS_STR);
char * opt_solver_third_button1(OPT_ARGS_STR);
char * opt_solver_third_button2(OPT_ARGS_STR);
char * opt_solver_third_button3(OPT_ARGS_STR);
char * opt_solver_third_button4(OPT_ARGS_STR);
char * opt_solver_third_button_command(OPT_ARGS_STR);
char * opt_solver_third_button_command0(OPT_ARGS_STR);
char * opt_solver_third_button_command1(OPT_ARGS_STR);
char * opt_solver_third_button_command2(OPT_ARGS_STR);
char * opt_solver_third_button_command3(OPT_ARGS_STR);
char * opt_solver_third_button_command4(OPT_ARGS_STR);
char * opt_solver_fourth_button(OPT_ARGS_STR);
char * opt_solver_fourth_button0(OPT_ARGS_STR);
char * opt_solver_fourth_button1(OPT_ARGS_STR);
char * opt_solver_fourth_button2(OPT_ARGS_STR);
char * opt_solver_fourth_button3(OPT_ARGS_STR);
char * opt_solver_fourth_button4(OPT_ARGS_STR);
char * opt_solver_fourth_button_command(OPT_ARGS_STR);
char * opt_solver_fourth_button_command0(OPT_ARGS_STR);
char * opt_solver_fourth_button_command1(OPT_ARGS_STR);
char * opt_solver_fourth_button_command2(OPT_ARGS_STR);
char * opt_solver_fourth_button_command3(OPT_ARGS_STR);
char * opt_solver_fourth_button_command4(OPT_ARGS_STR);
char * opt_solver_fifth_button(OPT_ARGS_STR);
char * opt_solver_fifth_button0(OPT_ARGS_STR);
char * opt_solver_fifth_button1(OPT_ARGS_STR);
char * opt_solver_fifth_button2(OPT_ARGS_STR);
char * opt_solver_fifth_button3(OPT_ARGS_STR);
char * opt_solver_fifth_button4(OPT_ARGS_STR);
char * opt_solver_fifth_button_command(OPT_ARGS_STR);
char * opt_solver_fifth_button_command0(OPT_ARGS_STR);
char * opt_solver_fifth_button_command1(OPT_ARGS_STR);
char * opt_solver_fifth_button_command2(OPT_ARGS_STR);
char * opt_solver_fifth_button_command3(OPT_ARGS_STR);
char * opt_solver_fifth_button_command4(OPT_ARGS_STR);
char * opt_view_name(OPT_ARGS_STR);
char * opt_view_format(OPT_ARGS_STR);
char * opt_view_filename(OPT_ARGS_STR);
char * opt_view_axes_label0(OPT_ARGS_STR);
char * opt_view_axes_label1(OPT_ARGS_STR);
char * opt_view_axes_label2(OPT_ARGS_STR);
char * opt_view_axes_format0(OPT_ARGS_STR);
char * opt_view_axes_format1(OPT_ARGS_STR);
char * opt_view_axes_format2(OPT_ARGS_STR);
char * opt_view_gen_raise0(OPT_ARGS_STR);
char * opt_view_gen_raise1(OPT_ARGS_STR);
char * opt_view_gen_raise2(OPT_ARGS_STR);

// NUMBERS

double opt_general_initial_context(OPT_ARGS_NUM);
double opt_general_fontsize(OPT_ARGS_NUM);
double opt_general_graphics_fontsize(OPT_ARGS_NUM);
double opt_general_graphics_position0(OPT_ARGS_NUM);
double opt_general_graphics_position1(OPT_ARGS_NUM);
double opt_general_solver_position0(OPT_ARGS_NUM);
double opt_general_solver_position1(OPT_ARGS_NUM);
double opt_general_context_position0(OPT_ARGS_NUM);
double opt_general_context_position1(OPT_ARGS_NUM);
double opt_general_file_chooser_position0(OPT_ARGS_NUM);
double opt_general_file_chooser_position1(OPT_ARGS_NUM);
double opt_general_viewport2(OPT_ARGS_NUM);
double opt_general_viewport3(OPT_ARGS_NUM);
double opt_general_polygon_offset_always(OPT_ARGS_NUM);
double opt_general_polygon_offset_factor(OPT_ARGS_NUM);
double opt_general_polygon_offset_units(OPT_ARGS_NUM);
double opt_general_menu_position0(OPT_ARGS_NUM);
double opt_general_menu_position1(OPT_ARGS_NUM);
double opt_general_system_menu_bar(OPT_ARGS_NUM);
double opt_general_message_position0(OPT_ARGS_NUM);
double opt_general_message_position1(OPT_ARGS_NUM);
double opt_general_message_size0(OPT_ARGS_NUM);
double opt_general_message_size1(OPT_ARGS_NUM);
double opt_general_option_position0(OPT_ARGS_NUM);
double opt_general_option_position1(OPT_ARGS_NUM);
double opt_general_statistics_position0(OPT_ARGS_NUM);
double opt_general_statistics_position1(OPT_ARGS_NUM);
double opt_general_visibility_position0(OPT_ARGS_NUM);
double opt_general_visibility_position1(OPT_ARGS_NUM);
double opt_general_clip_position0(OPT_ARGS_NUM);
double opt_general_clip_position1(OPT_ARGS_NUM);
double opt_general_manip_position0(OPT_ARGS_NUM);
double opt_general_manip_position1(OPT_ARGS_NUM);
double opt_general_visibility_mode(OPT_ARGS_NUM);
double opt_general_session_save(OPT_ARGS_NUM);
double opt_general_options_save(OPT_ARGS_NUM);
double opt_general_rotation0(OPT_ARGS_NUM);
double opt_general_rotation1(OPT_ARGS_NUM);
double opt_general_rotation2(OPT_ARGS_NUM);
double opt_general_rotation_center0(OPT_ARGS_NUM);
double opt_general_rotation_center1(OPT_ARGS_NUM);
double opt_general_rotation_center2(OPT_ARGS_NUM);
double opt_general_quaternion0(OPT_ARGS_NUM);
double opt_general_quaternion1(OPT_ARGS_NUM);
double opt_general_quaternion2(OPT_ARGS_NUM);
double opt_general_quaternion3(OPT_ARGS_NUM);
double opt_general_translation0(OPT_ARGS_NUM);
double opt_general_translation1(OPT_ARGS_NUM);
double opt_general_translation2(OPT_ARGS_NUM);
double opt_general_scale0(OPT_ARGS_NUM);
double opt_general_scale1(OPT_ARGS_NUM);
double opt_general_scale2(OPT_ARGS_NUM);
double opt_general_clip_factor(OPT_ARGS_NUM);
double opt_general_point_size(OPT_ARGS_NUM);
double opt_general_line_width(OPT_ARGS_NUM);
double opt_general_shine(OPT_ARGS_NUM);
double opt_general_shine_exponent(OPT_ARGS_NUM);
double opt_general_color_scheme(OPT_ARGS_NUM);
double opt_general_verbosity(OPT_ARGS_NUM);
double opt_general_nopopup(OPT_ARGS_NUM);
double opt_general_terminal(OPT_ARGS_NUM);
double opt_general_tooltips(OPT_ARGS_NUM);
double opt_general_confirm_overwrite(OPT_ARGS_NUM);
double opt_general_orthographic(OPT_ARGS_NUM);
double opt_general_draw_bounding_box(OPT_ARGS_NUM);
double opt_general_fast_redraw(OPT_ARGS_NUM);
double opt_general_axes(OPT_ARGS_NUM);
double opt_general_axes_auto_position(OPT_ARGS_NUM);
double opt_general_axes_xmin(OPT_ARGS_NUM);
double opt_general_axes_xmax(OPT_ARGS_NUM);
double opt_general_axes_ymin(OPT_ARGS_NUM);
double opt_general_axes_ymax(OPT_ARGS_NUM);
double opt_general_axes_zmin(OPT_ARGS_NUM);
double opt_general_axes_zmax(OPT_ARGS_NUM);
double opt_general_axes_tics0(OPT_ARGS_NUM);
double opt_general_axes_tics1(OPT_ARGS_NUM);
double opt_general_axes_tics2(OPT_ARGS_NUM);
double opt_general_small_axes(OPT_ARGS_NUM);
double opt_general_small_axes_position0(OPT_ARGS_NUM);
double opt_general_small_axes_position1(OPT_ARGS_NUM);
double opt_general_small_axes_size(OPT_ARGS_NUM);
double opt_general_quadric_subdivisions(OPT_ARGS_NUM);
double opt_general_double_buffer(OPT_ARGS_NUM);
double opt_general_alpha_blending(OPT_ARGS_NUM);
double opt_general_vector_type(OPT_ARGS_NUM);
double opt_general_arrow_head_radius(OPT_ARGS_NUM);
double opt_general_arrow_stem_length(OPT_ARGS_NUM);
double opt_general_arrow_stem_radius(OPT_ARGS_NUM);
double opt_general_trackball(OPT_ARGS_NUM);
double opt_general_rotation_center_cg(OPT_ARGS_NUM);
double opt_general_zoom_factor(OPT_ARGS_NUM);
double opt_general_clip0(OPT_ARGS_NUM);
double opt_general_clip0a(OPT_ARGS_NUM);
double opt_general_clip0b(OPT_ARGS_NUM);
double opt_general_clip0c(OPT_ARGS_NUM);
double opt_general_clip0d(OPT_ARGS_NUM);
double opt_general_clip1(OPT_ARGS_NUM);
double opt_general_clip1a(OPT_ARGS_NUM);
double opt_general_clip1b(OPT_ARGS_NUM);
double opt_general_clip1c(OPT_ARGS_NUM);
double opt_general_clip1d(OPT_ARGS_NUM);
double opt_general_clip2(OPT_ARGS_NUM);
double opt_general_clip2a(OPT_ARGS_NUM);
double opt_general_clip2b(OPT_ARGS_NUM);
double opt_general_clip2c(OPT_ARGS_NUM);
double opt_general_clip2d(OPT_ARGS_NUM);
double opt_general_clip3(OPT_ARGS_NUM);
double opt_general_clip3a(OPT_ARGS_NUM);
double opt_general_clip3b(OPT_ARGS_NUM);
double opt_general_clip3c(OPT_ARGS_NUM);
double opt_general_clip3d(OPT_ARGS_NUM);
double opt_general_clip4(OPT_ARGS_NUM);
double opt_general_clip4a(OPT_ARGS_NUM);
double opt_general_clip4b(OPT_ARGS_NUM);
double opt_general_clip4c(OPT_ARGS_NUM);
double opt_general_clip4d(OPT_ARGS_NUM);
double opt_general_clip5(OPT_ARGS_NUM);
double opt_general_clip5a(OPT_ARGS_NUM);
double opt_general_clip5b(OPT_ARGS_NUM);
double opt_general_clip5c(OPT_ARGS_NUM);
double opt_general_clip5d(OPT_ARGS_NUM);
double opt_general_light0(OPT_ARGS_NUM);
double opt_general_light00(OPT_ARGS_NUM);
double opt_general_light01(OPT_ARGS_NUM);
double opt_general_light02(OPT_ARGS_NUM);
double opt_general_light03(OPT_ARGS_NUM);
double opt_general_light1(OPT_ARGS_NUM);
double opt_general_light10(OPT_ARGS_NUM);
double opt_general_light11(OPT_ARGS_NUM);
double opt_general_light12(OPT_ARGS_NUM);
double opt_general_light13(OPT_ARGS_NUM);
double opt_general_light2(OPT_ARGS_NUM);
double opt_general_light20(OPT_ARGS_NUM);
double opt_general_light21(OPT_ARGS_NUM);
double opt_general_light22(OPT_ARGS_NUM);
double opt_general_light23(OPT_ARGS_NUM);
double opt_general_light3(OPT_ARGS_NUM);
double opt_general_light30(OPT_ARGS_NUM);
double opt_general_light31(OPT_ARGS_NUM);
double opt_general_light32(OPT_ARGS_NUM);
double opt_general_light33(OPT_ARGS_NUM);
double opt_general_light4(OPT_ARGS_NUM);
double opt_general_light40(OPT_ARGS_NUM);
double opt_general_light41(OPT_ARGS_NUM);
double opt_general_light42(OPT_ARGS_NUM);
double opt_general_light43(OPT_ARGS_NUM);
double opt_general_light5(OPT_ARGS_NUM);
double opt_general_light50(OPT_ARGS_NUM);
double opt_general_light51(OPT_ARGS_NUM);
double opt_general_light52(OPT_ARGS_NUM);
double opt_general_light53(OPT_ARGS_NUM);
double opt_geometry_auto_coherence(OPT_ARGS_NUM);
double opt_geometry_normals(OPT_ARGS_NUM);
double opt_geometry_tangents(OPT_ARGS_NUM);
double opt_geometry_points(OPT_ARGS_NUM);
double opt_geometry_lines(OPT_ARGS_NUM);
double opt_geometry_surfaces(OPT_ARGS_NUM);
double opt_geometry_volumes(OPT_ARGS_NUM);
double opt_geometry_points_num(OPT_ARGS_NUM);
double opt_geometry_lines_num(OPT_ARGS_NUM);
double opt_geometry_surfaces_num(OPT_ARGS_NUM);
double opt_geometry_volumes_num(OPT_ARGS_NUM);
double opt_mesh_points_per_element(OPT_ARGS_NUM);
double opt_geometry_point_size(OPT_ARGS_NUM);
double opt_geometry_point_sel_size(OPT_ARGS_NUM);
double opt_geometry_point_type(OPT_ARGS_NUM);
double opt_geometry_line_width(OPT_ARGS_NUM);
double opt_geometry_line_sel_width(OPT_ARGS_NUM);
double opt_geometry_line_type(OPT_ARGS_NUM);
double opt_geometry_light(OPT_ARGS_NUM);
double opt_geometry_old_circle(OPT_ARGS_NUM);
double opt_geometry_old_newreg(OPT_ARGS_NUM);
double opt_geometry_circle_points(OPT_ARGS_NUM);
double opt_geometry_circle_warning(OPT_ARGS_NUM);
double opt_geometry_extrude_spline_points(OPT_ARGS_NUM);
double opt_geometry_scaling_factor(OPT_ARGS_NUM);
double opt_geometry_stl_create_elementary(OPT_ARGS_NUM);
double opt_geometry_stl_create_physical(OPT_ARGS_NUM);
double opt_mesh_optimize(OPT_ARGS_NUM);
double opt_mesh_quality(OPT_ARGS_NUM);
double opt_mesh_normals(OPT_ARGS_NUM);
double opt_mesh_tangents(OPT_ARGS_NUM);
double opt_mesh_explode(OPT_ARGS_NUM);
double opt_mesh_scaling_factor(OPT_ARGS_NUM);
double opt_mesh_lc_factor(OPT_ARGS_NUM);
double opt_mesh_rand_factor(OPT_ARGS_NUM);
double opt_mesh_gamma_inf(OPT_ARGS_NUM);
double opt_mesh_gamma_sup(OPT_ARGS_NUM);
double opt_mesh_radius_inf(OPT_ARGS_NUM);
double opt_mesh_radius_sup(OPT_ARGS_NUM);
double opt_mesh_points(OPT_ARGS_NUM);
double opt_mesh_lines(OPT_ARGS_NUM);
double opt_mesh_surfaces_edges(OPT_ARGS_NUM);
double opt_mesh_surfaces_faces(OPT_ARGS_NUM);
double opt_mesh_volumes_edges(OPT_ARGS_NUM);
double opt_mesh_volumes_faces(OPT_ARGS_NUM);
double opt_mesh_points_num(OPT_ARGS_NUM);
double opt_mesh_lines_num(OPT_ARGS_NUM);
double opt_mesh_surfaces_num(OPT_ARGS_NUM);
double opt_mesh_volumes_num(OPT_ARGS_NUM);
double opt_mesh_point_size(OPT_ARGS_NUM);
double opt_mesh_point_type(OPT_ARGS_NUM);
double opt_mesh_line_width(OPT_ARGS_NUM);
double opt_mesh_line_type(OPT_ARGS_NUM);
double opt_mesh_vertex_arrays(OPT_ARGS_NUM);
double opt_mesh_smooth_normals(OPT_ARGS_NUM);
double opt_mesh_angle_smooth_normals(OPT_ARGS_NUM);
double opt_mesh_light(OPT_ARGS_NUM);
double opt_mesh_light_two_side(OPT_ARGS_NUM);
double opt_mesh_format(OPT_ARGS_NUM);
double opt_mesh_msh_file_version(OPT_ARGS_NUM);
double opt_mesh_nb_smoothing(OPT_ARGS_NUM);
double opt_mesh_algo2d(OPT_ARGS_NUM);
double opt_mesh_algo3d(OPT_ARGS_NUM);
double opt_mesh_point_insertion(OPT_ARGS_NUM);
double opt_mesh_speed_max(OPT_ARGS_NUM);
double opt_mesh_min_circ_points(OPT_ARGS_NUM);
double opt_mesh_constrained_bgmesh(OPT_ARGS_NUM);
double opt_mesh_order(OPT_ARGS_NUM);
double opt_mesh_dual(OPT_ARGS_NUM);
double opt_mesh_interactive(OPT_ARGS_NUM);
double opt_mesh_use_cut_plane(OPT_ARGS_NUM);
double opt_mesh_cut_plane_as_surface(OPT_ARGS_NUM);
double opt_mesh_cut_plane_only_volume(OPT_ARGS_NUM);
double opt_mesh_cut_planea(OPT_ARGS_NUM);
double opt_mesh_cut_planeb(OPT_ARGS_NUM);
double opt_mesh_cut_planec(OPT_ARGS_NUM);
double opt_mesh_cut_planed(OPT_ARGS_NUM);
double opt_mesh_allow_degenerated_extrude(OPT_ARGS_NUM);
double opt_mesh_save_all(OPT_ARGS_NUM);
double opt_mesh_color_carousel(OPT_ARGS_NUM);
double opt_mesh_nb_nodes(OPT_ARGS_NUM);
double opt_mesh_nb_triangles(OPT_ARGS_NUM);
double opt_mesh_nb_quadrangles(OPT_ARGS_NUM);
double opt_mesh_nb_tetrahedra(OPT_ARGS_NUM);
double opt_mesh_nb_hexahedra(OPT_ARGS_NUM);
double opt_mesh_nb_prisms(OPT_ARGS_NUM);
double opt_mesh_nb_pyramids(OPT_ARGS_NUM);
double opt_mesh_cpu_time(OPT_ARGS_NUM);
double opt_solver_max_delay(OPT_ARGS_NUM);
double opt_solver_plugins(OPT_ARGS_NUM);
double opt_solver_client_server(OPT_ARGS_NUM);
double opt_solver_client_server0(OPT_ARGS_NUM);
double opt_solver_client_server1(OPT_ARGS_NUM);
double opt_solver_client_server2(OPT_ARGS_NUM);
double opt_solver_client_server3(OPT_ARGS_NUM);
double opt_solver_client_server4(OPT_ARGS_NUM);
double opt_solver_popup_messages(OPT_ARGS_NUM);
double opt_solver_popup_messages0(OPT_ARGS_NUM);
double opt_solver_popup_messages1(OPT_ARGS_NUM);
double opt_solver_popup_messages2(OPT_ARGS_NUM);
double opt_solver_popup_messages3(OPT_ARGS_NUM);
double opt_solver_popup_messages4(OPT_ARGS_NUM);
double opt_solver_merge_views(OPT_ARGS_NUM);
double opt_solver_merge_views0(OPT_ARGS_NUM);
double opt_solver_merge_views1(OPT_ARGS_NUM);
double opt_solver_merge_views2(OPT_ARGS_NUM);
double opt_solver_merge_views3(OPT_ARGS_NUM);
double opt_solver_merge_views4(OPT_ARGS_NUM);
double opt_post_vertex_arrays(OPT_ARGS_NUM);
double opt_post_scales(OPT_ARGS_NUM);
double opt_post_horizontal_scales(OPT_ARGS_NUM);
double opt_post_link(OPT_ARGS_NUM);
double opt_post_smooth(OPT_ARGS_NUM);
double opt_post_anim_delay(OPT_ARGS_NUM);
double opt_post_anim_cycle(OPT_ARGS_NUM);
double opt_post_combine_remove_orig(OPT_ARGS_NUM);
double opt_post_plugins(OPT_ARGS_NUM);
double opt_post_nb_views(OPT_ARGS_NUM);
double opt_post_file_format(OPT_ARGS_NUM);
double opt_view_nb_timestep(OPT_ARGS_NUM);
double opt_view_timestep(OPT_ARGS_NUM);
double opt_view_min(OPT_ARGS_NUM);
double opt_view_max(OPT_ARGS_NUM);
double opt_view_custom_min(OPT_ARGS_NUM);
double opt_view_custom_max(OPT_ARGS_NUM);
double opt_view_xmin(OPT_ARGS_NUM);
double opt_view_xmax(OPT_ARGS_NUM);
double opt_view_ymin(OPT_ARGS_NUM);
double opt_view_ymax(OPT_ARGS_NUM);
double opt_view_zmin(OPT_ARGS_NUM);
double opt_view_zmax(OPT_ARGS_NUM);
double opt_view_offset0(OPT_ARGS_NUM);
double opt_view_offset1(OPT_ARGS_NUM);
double opt_view_offset2(OPT_ARGS_NUM);
double opt_view_raise0(OPT_ARGS_NUM);
double opt_view_raise1(OPT_ARGS_NUM);
double opt_view_raise2(OPT_ARGS_NUM);
double opt_view_transform00(OPT_ARGS_NUM);
double opt_view_transform01(OPT_ARGS_NUM);
double opt_view_transform02(OPT_ARGS_NUM);
double opt_view_transform10(OPT_ARGS_NUM);
double opt_view_transform11(OPT_ARGS_NUM);
double opt_view_transform12(OPT_ARGS_NUM);
double opt_view_transform20(OPT_ARGS_NUM);
double opt_view_transform21(OPT_ARGS_NUM);
double opt_view_transform22(OPT_ARGS_NUM);
double opt_view_arrow_size(OPT_ARGS_NUM);
double opt_view_arrow_size_proportional(OPT_ARGS_NUM);
double opt_view_arrow_head_radius(OPT_ARGS_NUM);
double opt_view_arrow_stem_length(OPT_ARGS_NUM);
double opt_view_arrow_stem_radius(OPT_ARGS_NUM);
double opt_view_normals(OPT_ARGS_NUM);
double opt_view_tangents(OPT_ARGS_NUM);
double opt_view_displacement_factor(OPT_ARGS_NUM);
double opt_view_fake_transparency(OPT_ARGS_NUM);
double opt_view_explode(OPT_ARGS_NUM);
double opt_view_visible(OPT_ARGS_NUM);
double opt_view_intervals_type(OPT_ARGS_NUM);
double opt_view_saturate_values(OPT_ARGS_NUM);
double opt_view_max_recursion_level(OPT_ARGS_NUM);
double opt_view_target_error(OPT_ARGS_NUM);
double opt_view_colormap_alpha(OPT_ARGS_NUM);
double opt_view_colormap_alpha_power(OPT_ARGS_NUM);
double opt_view_colormap_beta(OPT_ARGS_NUM);
double opt_view_colormap_bias(OPT_ARGS_NUM);
double opt_view_colormap_curvature(OPT_ARGS_NUM);
double opt_view_colormap_invert(OPT_ARGS_NUM);
double opt_view_colormap_number(OPT_ARGS_NUM);
double opt_view_colormap_rotation(OPT_ARGS_NUM);
double opt_view_colormap_swap(OPT_ARGS_NUM);
double opt_view_external_view(OPT_ARGS_NUM);
double opt_view_gen_raise_view(OPT_ARGS_NUM);
double opt_view_gen_raise_factor(OPT_ARGS_NUM);
double opt_view_use_gen_raise(OPT_ARGS_NUM);
double opt_view_type(OPT_ARGS_NUM);
double opt_view_axes(OPT_ARGS_NUM);
double opt_view_axes_auto_position(OPT_ARGS_NUM);
double opt_view_axes_tics0(OPT_ARGS_NUM);
double opt_view_axes_tics1(OPT_ARGS_NUM);
double opt_view_axes_tics2(OPT_ARGS_NUM);
double opt_view_axes_xmin(OPT_ARGS_NUM);
double opt_view_axes_ymin(OPT_ARGS_NUM);
double opt_view_axes_zmin(OPT_ARGS_NUM);
double opt_view_axes_xmax(OPT_ARGS_NUM);
double opt_view_axes_ymax(OPT_ARGS_NUM);
double opt_view_axes_zmax(OPT_ARGS_NUM);
double opt_view_position0(OPT_ARGS_NUM);
double opt_view_position1(OPT_ARGS_NUM);
double opt_view_auto_position(OPT_ARGS_NUM);
double opt_view_size0(OPT_ARGS_NUM);
double opt_view_size1(OPT_ARGS_NUM);
double opt_view_nb_iso(OPT_ARGS_NUM);
double opt_view_boundary(OPT_ARGS_NUM);
double opt_view_light(OPT_ARGS_NUM);
double opt_view_light_two_side(OPT_ARGS_NUM);
double opt_view_smooth_normals(OPT_ARGS_NUM);
double opt_view_angle_smooth_normals(OPT_ARGS_NUM);
double opt_view_show_element(OPT_ARGS_NUM);
double opt_view_show_time(OPT_ARGS_NUM);
double opt_view_show_scale(OPT_ARGS_NUM);
double opt_view_draw_strings(OPT_ARGS_NUM);
double opt_view_draw_points(OPT_ARGS_NUM);
double opt_view_draw_quadrangles(OPT_ARGS_NUM);
double opt_view_draw_lines(OPT_ARGS_NUM);
double opt_view_draw_triangles(OPT_ARGS_NUM);
double opt_view_draw_tetrahedra(OPT_ARGS_NUM);
double opt_view_draw_hexahedra(OPT_ARGS_NUM);
double opt_view_draw_prisms(OPT_ARGS_NUM);
double opt_view_draw_pyramids(OPT_ARGS_NUM);
double opt_view_draw_scalars(OPT_ARGS_NUM);
double opt_view_draw_vectors(OPT_ARGS_NUM);
double opt_view_draw_tensors(OPT_ARGS_NUM);
double opt_view_scale_type(OPT_ARGS_NUM);
double opt_view_tensor_type(OPT_ARGS_NUM);
double opt_view_range_type(OPT_ARGS_NUM);
double opt_view_vector_type(OPT_ARGS_NUM);
double opt_view_arrow_location(OPT_ARGS_NUM);
double opt_view_point_size(OPT_ARGS_NUM);
double opt_view_line_width(OPT_ARGS_NUM);
double opt_view_point_type(OPT_ARGS_NUM);
double opt_view_line_type(OPT_ARGS_NUM);
double opt_print_format(OPT_ARGS_NUM);
double opt_print_eps_compress(OPT_ARGS_NUM);
double opt_print_eps_ps3shading(OPT_ARGS_NUM);
double opt_print_eps_quality(OPT_ARGS_NUM);
double opt_print_eps_occlusion_culling(OPT_ARGS_NUM);
double opt_print_eps_best_root(OPT_ARGS_NUM);
double opt_print_eps_background(OPT_ARGS_NUM);
double opt_print_eps_line_width_factor(OPT_ARGS_NUM);
double opt_print_eps_point_size_factor(OPT_ARGS_NUM);
double opt_print_jpeg_quality(OPT_ARGS_NUM);
double opt_print_jpeg_smoothing(OPT_ARGS_NUM);
double opt_print_gif_dither(OPT_ARGS_NUM);
double opt_print_gif_sort(OPT_ARGS_NUM);
double opt_print_gif_interlace(OPT_ARGS_NUM);
double opt_print_gif_transparent(OPT_ARGS_NUM);

// COLORS

unsigned int opt_general_color_background(OPT_ARGS_COL);
unsigned int opt_general_color_foreground(OPT_ARGS_COL);
unsigned int opt_general_color_text(OPT_ARGS_COL);
unsigned int opt_general_color_axes(OPT_ARGS_COL);
unsigned int opt_general_color_small_axes(OPT_ARGS_COL);
unsigned int opt_general_color_ambient_light(OPT_ARGS_COL);
unsigned int opt_general_color_diffuse_light(OPT_ARGS_COL);
unsigned int opt_general_color_specular_light(OPT_ARGS_COL);
unsigned int opt_geometry_color_points(OPT_ARGS_COL); 
unsigned int opt_geometry_color_lines(OPT_ARGS_COL);
unsigned int opt_geometry_color_surfaces(OPT_ARGS_COL);
unsigned int opt_geometry_color_volumes(OPT_ARGS_COL);
unsigned int opt_geometry_color_points_select(OPT_ARGS_COL);
unsigned int opt_geometry_color_lines_select(OPT_ARGS_COL);
unsigned int opt_geometry_color_surfaces_select(OPT_ARGS_COL);
unsigned int opt_geometry_color_volumes_select(OPT_ARGS_COL);
unsigned int opt_geometry_color_tangents(OPT_ARGS_COL);
unsigned int opt_geometry_color_normals(OPT_ARGS_COL);
unsigned int opt_mesh_color_points(OPT_ARGS_COL); 
unsigned int opt_mesh_color_points_deg2(OPT_ARGS_COL); 
unsigned int opt_mesh_color_lines(OPT_ARGS_COL); 
unsigned int opt_mesh_color_triangles(OPT_ARGS_COL);
unsigned int opt_mesh_color_quadrangles(OPT_ARGS_COL);
unsigned int opt_mesh_color_tetrahedra(OPT_ARGS_COL);
unsigned int opt_mesh_color_hexahedra(OPT_ARGS_COL);
unsigned int opt_mesh_color_prisms(OPT_ARGS_COL);
unsigned int opt_mesh_color_pyramid(OPT_ARGS_COL);
unsigned int opt_mesh_color_tangents(OPT_ARGS_COL);
unsigned int opt_mesh_color_normals(OPT_ARGS_COL);
unsigned int opt_mesh_color_1(OPT_ARGS_COL);
unsigned int opt_mesh_color_2(OPT_ARGS_COL);
unsigned int opt_mesh_color_3(OPT_ARGS_COL);
unsigned int opt_mesh_color_4(OPT_ARGS_COL);
unsigned int opt_mesh_color_5(OPT_ARGS_COL);
unsigned int opt_mesh_color_6(OPT_ARGS_COL);
unsigned int opt_mesh_color_7(OPT_ARGS_COL);
unsigned int opt_mesh_color_8(OPT_ARGS_COL);
unsigned int opt_mesh_color_9(OPT_ARGS_COL);
unsigned int opt_mesh_color_10(OPT_ARGS_COL);
unsigned int opt_view_color_points(OPT_ARGS_COL);
unsigned int opt_view_color_lines(OPT_ARGS_COL);
unsigned int opt_view_color_triangles(OPT_ARGS_COL);
unsigned int opt_view_color_quadrangles(OPT_ARGS_COL);
unsigned int opt_view_color_tetrahedra(OPT_ARGS_COL);
unsigned int opt_view_color_hexahedra(OPT_ARGS_COL);
unsigned int opt_view_color_prisms(OPT_ARGS_COL);
unsigned int opt_view_color_pyramids(OPT_ARGS_COL);
unsigned int opt_view_color_tangents(OPT_ARGS_COL);
unsigned int opt_view_color_normals(OPT_ARGS_COL);
unsigned int opt_view_color_text2d(OPT_ARGS_COL);
unsigned int opt_view_color_text3d(OPT_ARGS_COL);

// Data structures and global functions

typedef struct {
  char *str ; 
  int int1, int2, int3, int4 ;
} StringX4Int;

typedef struct {
  int level;
  char *str ;
  char * (*function)(int num, int action, char *val) ;
  char *def ;
  char *help ;
} StringXString ;

typedef struct {
  int level;
  char *str;
  double (*function)(int num, int action, double val) ;
  double def ;
  char *help ;
} StringXNumber ;

typedef struct {
  int level;
  char *str ; 
  unsigned int (*function)(int num, int action, unsigned int val) ;
  unsigned int def1, def2, def3 ;
  char *help ;
} StringXColor ;

void Init_Options (int num);
void Init_Options_GUI (int num);
void ReInit_Options (int num);
void Print_Options(int num, int level, int diff, char *filename);
void Print_OptionsDoc();

StringXString * Get_StringOptionCategory(char * cat);
StringXNumber * Get_NumberOptionCategory(char * cat);
StringXColor * Get_ColorOptionCategory(char * cat);

void Set_DefaultStringOptions(int num, StringXString s[]);
void Set_DefaultNumberOptions(int num, StringXNumber s[]);
void Set_DefaultColorOptions(int num, StringXColor s[]);

void Set_StringOptions_GUI(int num, StringXString s[]);
void Set_NumberOptions_GUI(int num, StringXNumber s[]);
void Set_ColorOptions_GUI(int num, StringXColor s[]);

void * Get_StringOption(char *str, StringXString s[]);
void * Get_NumberOption(char *str, StringXNumber s[]);
void * Get_ColorOption(char *str, StringXColor s[]);

void Print_StringOptions(int num, int level, int diff, StringXString s[], 
			 char *prefix, FILE *file);
void Print_NumberOptions(int num, int level, int diff, StringXNumber s[], 
			 char *prefix, FILE *file);
void Print_ColorOptions(int num, int level, int diff, StringXColor s[], 
			char *prefix, FILE *file);

void Print_StringOptionsDoc(StringXString s[], char *prefix, FILE * file);
void Print_NumberOptionsDoc(StringXNumber s[], char *prefix, FILE * file);
void Print_ColorOptionsDoc(StringXColor s[], char *prefix, FILE * file);

extern StringXString GeneralOptions_String[] ;
extern StringXString GeometryOptions_String[] ;
extern StringXString MeshOptions_String[] ;
extern StringXString SolverOptions_String[] ;
extern StringXString PostProcessingOptions_String[] ;
extern StringXString ViewOptions_String[] ;
extern StringXString PrintOptions_String[] ;

extern StringXNumber GeneralOptions_Number[] ;
extern StringXNumber GeometryOptions_Number[] ;
extern StringXNumber MeshOptions_Number[] ;
extern StringXNumber SolverOptions_Number[] ;
extern StringXNumber PostProcessingOptions_Number[] ;
extern StringXNumber ViewOptions_Number[] ;
extern StringXNumber PrintOptions_Number[] ;

extern StringXColor GeneralOptions_Color[] ;
extern StringXColor GeometryOptions_Color[] ;
extern StringXColor MeshOptions_Color[] ;
extern StringXColor SolverOptions_Color[] ;
extern StringXColor PostProcessingOptions_Color[] ;
extern StringXColor ViewOptions_Color[] ;
extern StringXColor PrintOptions_Color[] ;

#endif
