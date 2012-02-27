<?php
/**
* Return a themed breadcrumb trail.
*
* @param $breadcrumb
*   An array containing the breadcrumb links.
* @return a string containing the breadcrumb output.
*/
/*
function ptec_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  $links = array();
  $path = '';

  // Get URL arguments
  if( !isset($_REQUEST['q'])) {
    return '';
  }
  $arguments = explode('/', $_REQUEST['q']);

  // Remove empty values
  foreach ($arguments as $key => $value) {
    if (empty($value)) {
      unset($arguments[$key]);
    }
  }
  $arguments = array_values($arguments);

  // Add 'Home' link
  $links[] = l(t('Home'), '<front>');
  $links[] = l(t('Topics'), 'content/7');

  /*
  // Add other links
  if (!empty($arguments)) {
    foreach ($arguments as $key => $value) {

      // Don't make last breadcrumb a link
      if ($key == (count($arguments) - 1)) {
        $links[] = drupal_get_title();
      } else {
        if (!empty($path)) {
          $path .= '/'. $value;
        } else {
          $path .= $value;
          $node=node_load(substr(drupal_get_normal_path($path), 5));
          $title=node_page_title($node);
        }

		//Place link
        $links[] = l(drupal_ucfirst($value), $path);

      }
    }
  }


  // Set custom breadcrumbs
  drupal_set_breadcrumb($links);

  // Get custom breadcrumbs
  $breadcrumb = drupal_get_breadcrumb();

  // Hide breadcrumbs if only 'Home' exists
  if (count($breadcrumb) > 1) {
    return '<div class="breadcrumb">'. implode(' &raquo; ', $breadcrumb) .'</div>';
  }
}
*/

/*
function corporateclean_breadcrumb($variables){
  $breadcrumb = $variables['breadcrumb'];
  if (!empty($breadcrumb)) {
    $breadcrumb[] = drupal_get_title();
    return '<div class="breadcrumb">' . implode(' <span class="breadcrumb-separator">/</span> ', $breadcrumb) . '</div>';
  }
}
*/

function ptec_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  if (!empty($breadcrumb)) {
    // Adding the title of the current page to the breadcrumb.
    $breadcrumb[] = drupal_get_title();

  
    // Get URL arguments
    if( !isset($_REQUEST['q'])) {
	  return '';
    }
    $arguments = explode('/', $_REQUEST['q']);

    // Remove empty values
    foreach ($arguments as $key => $value) {
      if (empty($value)) {
        unset($arguments[$key]);
      }
    }
    $arguments = array_values($arguments);


    $links[] = l(t('Home'), '<front>');
    $links[] = l(t('Topics'), 'content/7');

    // Set custom breadcrumbs
    //drupal_set_breadcrumb($links);

    // Get custom breadcrumbs
    //$breadcrumb = drupal_get_breadcrumb();

    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

    $output .= '<div class="breadcrumb">' . implode(' / ', $links) . '</div>';
    return $output;
  }
}

?>