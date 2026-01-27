<?php

    $page = $_GET['page'] ?? 'accueil';
    $validesPages = ['accueil', 'services', 'portfolio', 'contacts'];
    if (!in_array($page, $validesPages)) {
        $page = 'accueil';
    }
    $pages = ['accueil', 'services', 'portfolio', 'contacts'];

?>

<!DOCTYPE html>
<html lang="fr">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.8/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-sRIl4kxILFvY47J16cr9ZwB07vP4J8+LH7qKQnuqkuIAvNWLzeN8tE5YBujZqJLB" crossorigin="anonymous">
    <title>Site - <?=  $page ?></title>
    <link rel="stylesheet" href="./assets/styles/style.css">
</head>
<body>